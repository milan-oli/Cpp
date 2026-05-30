#include<iostream>
using namespace std;
    int main(){
    int marks = 55;

        // && all conditions must be true
    if (marks > 80 && marks <= 100){
        cout << "A+." << endl;
    }
    else if (marks > 60 && marks <= 80){
        cout << "B+" << endl;
    }
    else if (marks > 50 && marks <= 60){
        cout << "C+" << endl;
    }
    else {
        cout << "You have failed." << endl;
    }

    int a = 200;
    int b = 33;
    int c = 500;

    // || at least one condition must be true
    if (a > b || a > c) {
        cout << "At least one condition is true";
    }

    int a = 33;
    int b = 200;

    // reverses a condition (true → false, false → true)
    if (!(a > b)) {
        cout << "a is NOT greater than b";
    }
    return 0;
}