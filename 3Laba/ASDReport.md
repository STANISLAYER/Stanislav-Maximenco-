# Лабораторная работа №3
## Пример с одним файлом:
```cpp
#include <iostream>
#include <string>
using namespace std;

int hello(int baza);
int main()
{
 int b = hello();
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
В терминале выдает следующее:
```cpp
PS C:\Users\russi\source\repos\STANISLAYER\Stanislav-Maximenco-\3Laba> cd "c:\Users\russi\source\repos\STANISLAYER\Stanislav-Maximenco-\3Laba\" ; if ($?) { g++ 3lab.cpp -o 3lab } ; if ($?) { .\3lab }
12 (то есть 4+8 и того 12)
```
## Пример с двумя файлами:

1. Объявите в новом файле main.cpp функцию которая принимает int и возвращает int с именем hello.
2. Вызовите функцию в функции main и выведите результат в консоль.
```cpp
#include <iostream>
#include <string>
using namespace std;

int hello();
int main()
{
 int b = hello();
cout <<b;
}
Результат с консоли:
undefined reference to `hello(int)'
```
