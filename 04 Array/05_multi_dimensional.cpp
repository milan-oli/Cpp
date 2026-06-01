#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4][4] = {{"Volvo", "BMW", "Ford", "Mazda"},
                         {"Tesla", "Audi", "Mercedes", "Honda"},
                         {"Toyota", "Nissan", "Hyundai", "Kia"},
                         {"Ferrari", "Lamborghini", "Porsche", "Bugatti"}};
                         
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Car [" << i << "][" << j << "]: " << cars[i][j] << endl;
        }
    }
    return 0;
}