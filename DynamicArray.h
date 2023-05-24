// Implementations of the Dynamic Array class

class DynamicArray
{
private:
    int* data;
    int size;
    int capacity;
public:
    DynamicArray();
    DynamicArray(int initial_capacity);
    ~DynamicArray();
    int getSize();
    int getCapacity();
    void resize(int new_capacity);
    void pushBack(int value);
    int popBack();
    void printArray();
};