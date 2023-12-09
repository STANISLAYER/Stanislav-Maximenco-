# Лабораторная работа №3
#include <iostream>
#include <string>
using namespace std;

int hello(int baza);
int main()
{
 int b = hello(2);
cout <<b;
}
1. В данной программе выдает ошибку   undefined reference to `hello(int)'  так как у функции hello отсутствует ее определение и ей нечего возвращать.