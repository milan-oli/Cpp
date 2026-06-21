#include<iostream>
using namespace std;
int main(){

    int *ptr;
    ptr = new int;

    cout << "The adrress of the Allocated Memory Dynamically is : ";
    cout<< ptr << endl;

    cout << "Enter the value Allocated Memory Dynamically : ";
    cin >> *ptr ;

    cout << "The value you Allocated Memoey Dynamically : " << *ptr ;

    delete ptr;

    return 0;
}