#include<iostream>
using namespace std;
int main(){
    int value = 42;
    int *ptr = &value;
    cout << "Value : " << value << endl;
    cout << "Address : " << ptr << endl; // ptr gives the address of value
    cout << "Value using pointer : " << *ptr << endl; // *ptr gives the value at the address stored in ptr, which is value

    *ptr = 100; // Modifying the value at the address stored in ptr
    cout << "Value using pointer after modification : " << *ptr << endl; // *ptr now gives the modified value, which is 100
    cout << "Modified Value : " << value << endl; /* value is now modified to 100 it means that *ptr and value are 
    references to the same memory location and when one is modified, the other is also modified */
    return 0;
}