#include <iostream>
#include <limits.h>
using namespace std;

class stackUsingAr
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    stackUsingAr(int totalSize)
    {
        data = new int[totalSize];
        capacity = totalSize;
        nextIndex = 0;
    }
    int size()
    {
        return nextIndex;
    }
    bool isempty()
    {
        size == 0;
    }
    int push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "stack is full" << endl;
            return ; 
        }
        data[nextIndex] = element;
        nextIndex++ ; 
    }
    int pop()
    {
        if (isempty())
        {
            cout << "stack is empty";
            return INT_MIN ; 
        }

        nextIndex--;
        return data[nextIndex] ; 
    }
    int top()
    {
        return data[nextIndex-1];
    }
};