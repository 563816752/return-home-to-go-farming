/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Permissions Department
 * 	One Lake Street
 * 	Upper Saddle River, NJ  07458
 * 	Fax: (201) 236-3290
*/ 

#include <cassert>
#include <utility>
using std::pair;

#include <string>
using std::string; 

#include <tr1/tuple>
using std::tr1::tuple; using std::tr1::get; 
using std::tr1::make_tuple;

#include <vector>
using std::vector;

#include <numeric>
using std::accumulate; 

#include <algorithm>
using std::equal_range; 

#include <exception>
#include <stdexcept>
using std::domain_error;

#include <iostream>
using std::ostream; using std::istream;
using std::cout; using std::endl; 

#include <fstream>
using std::ifstream; 

#include "Sales_data.h"

bool lt(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

// need to leave this for as a traditional for loop because we
// use the iterator to compute an index
// matches has three members: an index of a store and iterators into that store's vector
typedef tuple<vector<Sales_data>::size_type,
              vector<Sales_data>::const_iterator,
              vector<Sales_data>::const_iterator> matches;

// because we can't use auto, we'll define a typedef for files as well
typedef vector<vector<Sales_data> > Stores;

// files holds the transactions for every store 
// findBook returns a vector with an entry for each store that sold the given book
vector<matches>
findBook(const Stores &files, const string &book)
{
	vector<matches> ret;  // initially empty
	// for each store find the range of matching books, if any
	for (Stores::const_iterator it = files.begin(); 
				it != files.end(); ++it) {
		// find the range of Sales_data that have the same ISBN
		pair<vector<Sales_data>::const_iterator,
		     vector<Sales_data>::const_iterator> found = 
			equal_range(it->begin(), it->end(), book, compareIsbn);
		if (found.first != found.second)  // this store had sales
			// remember the index of this store and the matching range 
			ret.push_back(make_tuple(it - files.begin(), 
                                  found.first, found.second));
	}
	return ret; // empty if no matches found
}

vector<Sales_data> build_store(const string &s)
{
	Sales_data item;
	vector<Sales_data> ret;
	// pre C++ 11 fstreams file names must be const char* not string
	ifstream is(s.c_str());
	while (read(is, item))
		ret.push_back(item);
	sort (ret.begin(), ret.end(), lt);  // need sort for equal_range to work
	return ret;
}

void reportResults(istream &in, ostream &os, const Stores &files)
{
	string s;   // book to look for
	while (in >> s) {
		// stores that sold this book
		vector<matches> trans = findBook(files, s);  
		if (trans.empty()) {
			cout << s << " not found in any stores" << endl;
			continue;  // get the next book to look for
		}
		// for every store with a sale
		for (vector<matches>::const_iterator store = trans.begin();
				store != trans.end(); ++store)
			// get<n> returns the specified member from the tuple in store
			os << "store " << get<0>(*store) << " sales: "
			   << accumulate(get<1>(*store), get<2>(*store), 
			                 Sales_data(s))
			   << endl;
	}
}

int main(int argc, char **argv)
{
	assert(argc > 1);
	// each element in files holds the transactions for a particular store
	Stores files;
	for (int cnt = 1; cnt != argc; ++cnt)
		files.push_back(build_store(argv[cnt]));

	ifstream in("../data/findbook.in");  // ISBNs to search for
	reportResults(in, cout, files);
}
