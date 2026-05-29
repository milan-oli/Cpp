#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "Hello";
    
    cout << str1[0] << endl; // Output: H
    cout << str1[1] << endl; // Output: e

    //Using .at() method to access characters

    cout << str1.at(0) << endl; // Output: H
    cout << str1.at(1) << endl; // Output: e

    //change string characters

    str1[0] = 'j';
    cout << str1 << endl; // Output: jello

    str1.at(1) = 'a';
    cout << str1 << endl; // Output: jallo

     return 0;
}