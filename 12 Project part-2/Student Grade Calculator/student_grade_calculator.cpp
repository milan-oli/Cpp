#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    float marks[6];
    float totalMarks;
    float percentage;
    static float average;
    static int count;
    string subject[6] = {"English", "Nepali", "Math", "Science", "Opt.Math", "Computer"};

public:

    Student(string name, float marks[6])
    {
        this->name = name;

        for (int i = 0; i < 6; i++)
        {
            this->marks[i] = marks[i];
        }

        totalMarks = 0;
        for (int i = 0; i < 6; i++)
        {
            totalMarks += marks[i];
        }

        percentage = (totalMarks / 600) * 100;

        count ++;

        average = ((average * (count - 1)) + percentage) / count;
    }

    string getGrade()
    {
        if (percentage > 90)
        {
            return "A+";
        }
        else if (percentage > 80)
        {
            return "A";
        }
        else if (percentage > 70)
        {
            return "B+";
        }
        else if (percentage > 60)
        {
            return "B";
        }
        else if (percentage > 50)
        {
            return "C+";
        }
        else if (percentage > 40)
        {
            return "C";
        }
        else
        {
            return "Fail";
        }
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Marks : ";
        for (int i = 0; i < 6; i++)
        {
            cout << subject[i] << " : " << marks[i] << endl;
        }
        cout << "Total Marks : " << totalMarks << endl;
        cout << "Percentage : " << percentage << endl;
        cout << "Grade : " << getGrade() << endl;
        
    }

static void showClassAverage();
};

float Student::average = 0;
int Student ::count = 0;
void Student ::showClassAverage()
{
    cout << "Average : " << average;
}

int main(){
    int n ;
    string name;
    float marks[6];
    string subject[6] = {"English", "Nepali", "Math", "Science", "Opt.Math", "Computer"} ;

    cout << "Enter the Student Number : ";
    cin >> n;
    cin.ignore();
    for (int i = 0 ; i < n ;i++){
        cout << "Enter name : " ;;
        getline(cin,name);
        
        for(int j = 0 ; j < 6 ; j++){
            do{
                cout << "Enter marks of " << subject[j] << " : " ;
                cin >> marks[j];
                if(marks[j] > 100  || marks[j] < 0){
                    cout << "Enter marks between 0 - 100 .\n";
                }
                
            }while(marks[j] > 100 || marks[j] < 0);
            
        }
        cin.ignore();
        Student s(name,marks);
        s.display();
    }
    Student::showClassAverage();
    return 0;

}