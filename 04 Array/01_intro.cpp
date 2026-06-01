#include<iostream>
#include<string>

using namespace std;
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    
    cout << cars[1] << endl;
    
    cars[0] = "Opel";
    cout << cars[0] << endl;

    return 0;
}
    