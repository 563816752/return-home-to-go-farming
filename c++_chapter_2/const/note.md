# const
const用于封锁直接修饰的内容，该内容变为只读，该变量不能作为左值(左值：放在赋值号‘=’的左边，使用变量的写权限)
## 1. const修饰普通类型的变量
```c++
const int  a = 7;  
int  b = a; //it's right
```
因为a被编译器认为是一个常量，其值不允许修改。

## 2. const 修饰指针变量
- const 修饰指针指向的内容，则内容为不可变量。
```c++
const int* p = &b; 
p=&c; //使用p1做左值，合法
*p=200；//使用*p1做左值，非法
//const 使得*p不改变，但是p可以改变
```


- const 修饰指针，则指针为不可变量。
``` c++
int a = 8;
int* const p = &a;
*p = 9; //it’s right
//但是p的不改变
```


- const 修饰指针和指针指向的内容，则指针和指针指向的内容都为不可变量。
```c++
int a = 8;
const int * const  p = &a;
```
全部不能改变

## 3.const参数传递和函数返回值。
```c++
#include<iostream>
using namespace std;
void Cpf(const int a)
{
   cout<<a;// ++a;  it's wrong, a can't is changed
}
int main()
{
    Cpf(8);
    return 0;
}
```
进入
