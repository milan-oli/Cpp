#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(string i : cars){
        cout << i << endl;
    }
    return 0;
}