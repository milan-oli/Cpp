#include<iostream>
using namespace std;
int main(){
    int value = 42;
    int *ptr = &value;
    cout << "Value : " << value << endl;
    cout << "Address : " << ptr << endl; // ptr gives the address of value
    cout << "Value using pointer : " << *ptr << endl; // *ptr gives the value at the address stored in ptr, which is value
    return 0;
}