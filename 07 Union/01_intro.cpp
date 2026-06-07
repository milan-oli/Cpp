#include <iostream>
using namespace std;

union Student {
    int rollNo;
    float height;
    char firstLetter;
};

int main(){
    Student data;

    data.rollNo = 21;
    cout << data.rollNo << endl;

    data.height = 5.2;
    cout << data.height << endl;

    data.firstLetter = 'N';
    cout << data.firstLetter << endl;

    return 0;
}