#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}