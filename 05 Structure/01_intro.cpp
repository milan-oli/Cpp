#include<iostream>
#include<string>
using namespace std;
struct myStructure{
    int myNum;
    string myString;
};
int main(){
    myStructure myStruct;
    myStruct.myNum = 1;
    myStruct.myString = "Hello World!";

    cout << "My number = " << myStruct.myNum << endl;
    cout << "My String = " << myStruct.myString << endl;

    return 0;
}