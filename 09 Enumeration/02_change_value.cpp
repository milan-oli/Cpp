#include<iostream>
using namespace std;
enum level{
    LOW = 3,
    MEDIUM = 5,
    HIGH = 7
};
int main(){
    level myVar = MEDIUM;
    //Low = 3 , medium = 5 , high = 7
    cout << myVar;
    return 0;
}