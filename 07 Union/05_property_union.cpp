#include <iostream>
using namespace std;
union Data {
    int intValue;
    double doubleValue;
    char charValue;
};

int main() {
    Data data;

    data.intValue = 42;
    cout << "Integer value: " << data.intValue << endl;

    data.doubleValue = 3.14;
    cout << "Double value: " << data.doubleValue << endl;
    cout << "Integer value after assigning double: " << data.intValue << endl;

    data.charValue = 'A';
    cout << "Char value: " << data.charValue << endl;
    cout << "Double value after assigning char: " << data.doubleValue << endl;

    return 0;
}
/*
 Only the last assigned member holds a valid value. Reading any other member gives undefined/garbage data.
 but here we get correct double value at last although assigning char because double occupy 8 byte 
 and char occupy 1 byte only so double have 7 byte remanning in which the double value is store and
 shown correct value after assigning char
 
*/