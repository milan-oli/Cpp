//Addition of number from 0 to n

#include<iostream>
using namespace std;
int add(int n){
    if(n>0){
        return n + add(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    cout << "Addition Value = "<< add(10);
    return 0;
}