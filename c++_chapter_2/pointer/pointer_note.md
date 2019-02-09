# pointer
**指针**是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：
```c++
#include <iostream>
using namespace std;
 
int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
   ip = &var;       // 在指针变量中存储 var 的地址
   cout << "Value of var variable: ";
   cout << var << endl;
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   return 0;
}
```
输出
```c++
Value of var variable: 20
Address stored in ip variable: 0xbfc601ac
Value of *ip variable: 20
```

void* 指针可以存放任意类型的指针
```c++
i=0;
int *ip=i;// 非法只能放地址
```
```c++
int*p1,p2;
```
只有第一个是指针，第二个是int型变量