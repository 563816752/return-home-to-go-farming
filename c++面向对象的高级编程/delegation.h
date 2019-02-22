#include <iostream>
using namespace std;

class stringRep
{
    friend class sstring;
public:
    stringRep():count_n(0){}
    ~stringRep(){}
    stringRep(char* chr):count_n(0){this->chr=chr;}
    char* getchr() const {return chr;}
    int get_n() const {return count_n;}
private:
    int count_n;
    char* chr;
};

 
class sstring
{
public:
    sstring(){}
    sstring(stringRep& sr):rep(&sr){sr.count_n++;}
    ~sstring(){(rep->count_n)--;}
    stringRep* rep;
};