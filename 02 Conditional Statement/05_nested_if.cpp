#include<iostream>
using namespace std;
int main(){
    int age = 30;

    if (age >= 18){
        if (age >= 60){
            cout << "You are a senior citizen." << endl;
        }
        else {
            cout << "You are an adult." << endl;
        }
    }
    else {
        cout << "You are a minor." << endl;
    }
    return 0;
}