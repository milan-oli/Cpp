#include<iostream>
using namespace std;
string display(string str){
    string str2 = "function !! ";
    return (str + str2) ;
}
int main(){
    string str;
    cout << display("Hello ") << endl;
    return 0;
}