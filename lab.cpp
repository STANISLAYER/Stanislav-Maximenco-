1.

#include <iostream>
int main()
{
    int i;
    i = 69;
    int number = 69;
    i= 69 + 72;
    int array[3] = { };
    int* iPointer = &i;
    number = *iPointer;
    *iPointer = 15;
    iPointer = &array[0];
    iPointer = iPointer +2;
    array[0] = 5;
    *iPointer = 6;
}

2.

#include <stdlib.h>
#include <iostream>

// Объявляем структуру данных
struct TwoInts
{
    int a;
    int b;
};
// Тоже объявляем структуру данных, в которой будет храниться целочисленный массив из 4 элементов и указатель someNumber
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // Создаем экземпляр структуры TwoInts и задаем ему значение по умолчанию (0)
    TwoInts i2 = { };
    i2.a = 5;
    i2.b = 7;

    // Выводим значения a и b
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;
    
    // Создаем экземпляр структуры StructWithArray и задаем ему значение по умолчанию (0)
    StructWithArray s = { };
    s.arr[0] = 10;

    // Создаем еще один экземпляр структуры StructWithArray и инициализируем его значениями по умолчанию (0)
    StructWithArray s1 = { };
    s1.arr[0] = 15;

    // Создаем указатель на StructWithArray и присваиваем ему адрес s
    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;     // Присваеваем значение 20 первому элементу массива arr внутри экземпляра структуры s

    // Выводим значение arr[0] в s, оно теперь равно 20
    std::cout << s.arr[0] << std::endl;
    
    // Меняем значение arr[0] в s на 25
    s.arr[0] = 25;
    
    // Выводим значение arr[0] в s, оно теперь равно 25
    std::cout << s.arr[0] << std::endl;
    
    // Изменяем значение arr[0] через указатель sPointer, оно теперь равно 30
    sPointer->arr[0] = 30;
    
    // Выводим значение arr[0] в s, оно теперь равно 30
    std::cout << s.arr[0] << std::endl;

    // Переназначаем указатель sPointer на s1
    sPointer = &s1;
    
    // Изменяем значение arr[0] через указатель sPointer в экземпляре структуры s1, оно теперь равно 35.
    sPointer->arr[0] = 35;
    
    // Выводим значение arr[0] в s, оно осталось равным 30, так как sPointer указывает на s1
    std::cout << s.arr[0] << std::endl;
    
    // Выводим значение arr[0] в s1, оно теперь равно 35
    std::cout << s1.arr[0] << std::endl;

    // Создаем массив из двух элементов типа StructWithArray и ставим им значения (0)
    StructWithArray structArray[2] = { };
    
    // Задаем значение arr[3] в первом элементе массива
    structArray[0].arr[3] = 77;
    
    // Присваиваем указателю someNumber во втором элементе адрес arr[3] в первом элементе массива
    structArray[1].someNumber = &structArray[0].arr[3];

    // Устанавливаем sPointer так, чтобы он указывал на s
    sPointer = &s;
    
    // Создаем указатель pointer, который указывает на arr[3] в s
    int* pointer = &sPointer->arr[3];
    
    // Задаем значение arr[3] в s равным 72
    s.arr[3] = 72;
    
    // Выводим значение, на которое указывает pointer, оно равно 72
    std::cout << *pointer;

<<<<<<< HEAD
    // Создаем переменную memory типа StructWithArray и заполняем ее нулями
=======
    // Создаем переменную memory типа StructWithArray и заполняем ее 0-ми
>>>>>>> update
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    return 0;
}
