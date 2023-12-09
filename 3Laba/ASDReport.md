# Лабораторная работа №3
```cpp
#include <iostream>
#include <string>
using namespace std;

int hello(int baza);
int main()
{
 int b = hello(2);
cout <<b;
}
```
 В данной программе выдает ошибку   undefined reference to `hello(int)'  так как у функции hello отсутствует ее определение и ей нечего возвращать.

 Рабочая программа, с определенной функцией:
 ```cpp
 #include <iostream>
#include <string>
using namespace std;

int hello(int baza, int acasa)
{
    return baza + acasa;
}
int main()
{
 int b = hello(4,8);
cout <<b;
}
```
