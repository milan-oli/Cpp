#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered : " << str << endl;
    
    getline(cin, str); // This will read the remaining newline character from the previous input
    
    //Using getline() to read a string with spaces

    string str2;
    cout << "Enter a string with spaces: ";
    getline(cin, str2);
    cout << "You entered : " << str2 << endl;

    return 0;
}