#include<iostream>
using namespace std;
void add(int a, int b = 10){
    cout << a + b;
}
int main(){
    cout<<"Adding using default value (b = 10) = ";
    add(30);
    cout << endl;
    cout<<"Adding by passing both values arguments : ";
    add(30,50);
    return 0;
}