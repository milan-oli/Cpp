#include <iostream>
using namespace std;

struct Employee{
    int id;

    // Anonymous union
    union {
        float hourlyRate;
        float salary;
    };
};

int main(){
    Employee e1; 
    e1.id = 101;

    // Access anonymous union member
    e1.hourlyRate = 300;

    cout << "Employee ID: " << e1.id << "\n";
    cout << "Hourly Rate: Rs " << e1.hourlyRate << endl;

    // Only one member is active at a time
    e1.salary = 50000;
    cout << "Salary: Rs " << e1.salary << endl;

    return 0;
}