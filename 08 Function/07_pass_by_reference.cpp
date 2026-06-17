#include<iostream>
using namespace std;
void swap(int &a ,int &b ){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 20 , b = 50;
    cout << "Value before Swap A : "<<a<<", B : "<<b<<endl;
    swap(a,b);
    cout << "Value after Swap A : "<<a<<", B : "<<b<<endl;
    return 0;
}