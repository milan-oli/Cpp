#include<iostream>
using namespace std;
enum level{
    LOW,
    MEDIUM,
    HIGH
};
int main(){
    level myVar = MEDIUM;
    //Low = 0 , medium = 1 , high = 2
    cout << myVar;
    return 0;
}