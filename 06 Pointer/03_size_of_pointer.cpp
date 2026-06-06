/*
The size of pointer in a system is equal for every pointer no matter what type of data it is pointing to. 
It does not depend on the type, but on operating system and CPU architecture. 
The size of pointers in C++ is 

8 bytes for a 64-bit System
4 bytes for a 32-bit System
*/

#include <iostream>
using namespace std;

int main() {
    int *ptr1;
    char *ptr2;
    
    // Finding size using sizeof()
    cout << sizeof(ptr1) << endl;
    cout << sizeof(ptr2);
    
    return 0;
}