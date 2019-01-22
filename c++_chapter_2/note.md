# 变量和基本类型

- 算术类型包括整型(int,char, bool)和浮点型

- int 16bit  float 32bit double 64bit

- 无符号数 只能表示正数 unsigned char 0~255 char 128~127

- ```c++
  int units_sold = 0; 
  int units_sold = {0}; 
  int units_sold{0}; 
  int units_sold(0);
  //都可以
  ```

- extern int i;声明不定义 int i;定义j

- ``` c++
  int  &refval=ival;
  refval指向ival
  ```

- ```c++
  int *i=nullptr;
  ```

- 