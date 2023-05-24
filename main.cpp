#include<iostream>
#include"DynamicArray.h"

int main()
{
    DynamicArray test_array(2);

    std::cout << test_array.getSize() << std::endl;
    std::cout << test_array.getCapacity() << std::endl;

    return 0;
}