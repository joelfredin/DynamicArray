#include <algorithm>
#include"DynamicArray.h"

DynamicArray::DynamicArray() : data(nullptr), size(0), capacity(15)
{
}

DynamicArray::DynamicArray(int initial_capacity) : capacity(initial_capacity), size(0), data(new int[initial_capacity])
{
}

DynamicArray::~DynamicArray()
{    
    delete[] data;
}

int DynamicArray::getSize()
{
    return size;
}

int DynamicArray::getCapacity()
{
    return capacity;
}

void DynamicArray::resize(int new_capacity)
{
    int* new_data = new int[new_capacity];
    std::copy(data, data + std::min(capacity, new_capacity), new_data);
    delete[] data;
    data = new_data;
    capacity = new_capacity;
}

void DynamicArray::push_back(int value)
{
    
}