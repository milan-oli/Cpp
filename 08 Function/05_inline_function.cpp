#include<iostream>
using namespace std;
inline void add(int a , int b){
    cout << a + b ;
}
int main(){
    cout << "Add = " ;
    add(23,45) ;
    return 0;
}