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
undefined reference to `hello()'
```
3. Тот же код, что и для main.cpp, ошибка та же
4. При компиляции обоих фалов разом выдает следующую ошибку:
```cpp
3lab.cpp:(.text+0xe): undefined reference to `hello()'
f.cpp:(.text+0xe): undefined reference to `hello()'
```
Данные ошибки появляются из-за неопределения функций как в файле 3lab.cpp, так и в файле f.cpp.
5. Определите функцию hello в файле f.cpp и попробуйте скомпилировать. (Должно пойти).

#include <iostream>
#include <string>
using namespace std;

```cpp
int hello(int b, int c)
{
    return b + c; 
}
int main()
{
 int b = hello(3,6);
cout <<b;
}
И в правду идет, выдает в терминале:
9(то есть 3+6)
```
6. Есть я пытаюсь скомпилировать только файл main.cpp( в моев случае 3lab.cpp), то у меня выдает ту же самую ошибку, что и в случае с примером с одним файлов, до определения функции:
```cpp
undefined reference to `hello()'
```
7. Добавьте к определению функции модификатор static.
```cpp
#include <iostream>
#include <string>
using namespace std;

 static int hello(int b, int c)
{
   return b + c; 
}
int main()
{
 int b = hello(3,6);
cout <<b;
}
```
8. Попробуйте скомпилировать. Объясните ошибки.
При компиляции мне выдало такую ошибку:
```cpp
undefined reference to `hello()'
```
В данном случае эта ошибка означает, что из-за модификатора static, функция видна только в файле f.cpp

9. Перекопировал определение функции в main.cpp(включая static)
10. Заработал, выдал следующий ответ
`9`
Сейчас сработало, так как теперь функция видна и там и там, благодаря добавлению модификаторa static в main.cpp(3lab.cpp)
11. Объясните сколько копий тела функции hello скомпилируется в финальный executable
По итогу, в финальный executable скопируется только одна копия тела функции hello, так как каждый из файлов 3lab.cpp и f.cpp содержат свою собственную копию функции "hello". Однако при объединении(линковке), сам линкер может определить что эти копии равны(эквивалентны) и объединить их в одну копию в финальном исполняемом файле.