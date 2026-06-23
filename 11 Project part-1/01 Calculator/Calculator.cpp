//This calculator performs +, −, ×, ÷ within 2 variable and error handling for division by zero.
#include<iostream>
using namespace std;
void calcu(double num1, double num2 , char op)
{
    switch(op){
        case '+' :
            cout << num1 << " + " << num2  <<" = " << num1 + num2 <<endl;
            break;
         case '-' :
            cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
            break;
         case '*' :
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
            break;
        case '/' :
            if(num2 == 0 ){
                cout << "Error!!"<<endl;
            }
            else{
               cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl; 
            }
            break;
        default:
            cout << "Unexpected operator ....."<<endl;
    }
}
int main(){
    double num1,num2;
    char op;

    cout<<"Enter a first number : ";
    cin >> num1;
    cout << " Enter a Operator (+,-,*,/) : ";
    cin >> op;
    cout<<"Enter a second number : ";
    cin >> num2;

    calcu(num1,num2,op);

    return 0;
}