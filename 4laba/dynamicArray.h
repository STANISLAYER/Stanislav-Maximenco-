#pragma once

#include <span>

struct DynamicArray
{
    int* data;
    int length;
    int capacity;
};

DynamicArray createDynamicArray();
DynamicArray createDynamicArrayWithCapacity(int capacity);
void addElementToArray(DynamicArray* arr, int element);
int getElementAtIndex(DynamicArray* arr, int index);
std::span<int> getCurrentSpan(DynamicArray* arr);
void clearDynamicArray(DynamicArray* arr);