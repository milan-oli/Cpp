#include<iostream>
using namespace std;
int &largest(int &a, int &b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
    int a = 30 , b = 40;
    cout << "value before calling function A : " <<a<<", B : "<<b<<endl;
    largest(a,b) = 20;
    cout << "value after calling function and assigning 20 to largest one, A : " <<a<<", B : "<<b<<endl;
    return 0;
}