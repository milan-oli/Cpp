#include <iostream>
using namespace std;

// Define a structure containing a nested union
struct Employee{
    char name[50];
    int id;

    // Nested union
    union Pay {
        float hourlyRate;
        float salary;
    } payment; 
};

int main(){
    Employee e1; 
    e1.id = 101;

    // Access nested union member using dot operator
    e1.payment.hourlyRate = 300.0;

    cout << "Employee ID: " << e1.id << "\n";
    cout << "Hourly Rate: Rs " << e1.payment.hourlyRate << endl;

    // You can also assign salary if needed
    e1.payment.salary = 50000.0;
    cout << "Salary: Rs " << e1.payment.salary << endl;
    return 0;
}