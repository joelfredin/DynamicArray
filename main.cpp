#include<iostream>
#include"DynamicArray.h"


// Main body of the project

int main()
{
    DynamicArray test_array(10);

    //std::cout << test_array.getSize() << std::endl;
    //std::cout << test_array.getCapacity() << std::endl;

    //test_array.printArray();

    test_array.resize(1);
    //std::cout << test_array.getCapacity() << std::endl;
    //std::cout << test_array.getSize() << std::endl;

    test_array.pushBack(2);
    test_array.pushBack(3);

    //test_array.printArray();

    std::cout << test_array.popBack() << std::endl;

    //std::cout << test_array.getCapacity() << std::endl;

    return 0;
}