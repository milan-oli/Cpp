#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "Size of array: " << sizeof(cars) << " bytes" << endl;
    cout << "Array size (length) : " << sizeof(cars) / sizeof(cars[0]) << endl;
   
    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++){
        cout << "Car " << i << ": " << cars[i] << endl;
    }
   for(string i : cars){
        cout << i << endl;
    }
    
    return 0;
}