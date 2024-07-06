#include<iostream>
using namespace std;

int main() {
    /*heap is larger memory than stack memory so we use heap memory.
    to use heap memory we use new keyword.
    new char; this will allocate a memory in heap of type char
    we cannot give this memory a name but we can point to this memory with help of 
    pointers. this pointer will be forms in stack memory.
    . stack memory is called as static memory and heap memeory is called as dyanmic memory*/

    char * ch = new char; //this will take 9bits of memory 8 for pointer and 1 for char
    int * arr = new int[5]; // 8 + 20 = 28 bits of memory

    //we have to release the heap manualy
    delete ch;
    delete []arr;
    return 0;
}