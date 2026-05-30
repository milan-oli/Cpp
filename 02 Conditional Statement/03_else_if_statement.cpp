#include<iostream>
using namespace std;
int main(){
    int age = 67;

    if (age >= 60){
        cout << "You are a senior citizen." << endl;
    }
    else if (age >= 18){
        cout << "You are an adult." << endl;
    }
    else {
        cout << "You are a minor." << endl;
    }
return 0;
}