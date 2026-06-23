#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rollNo;
    float marks;
};
int main(){

    struct student s[5];
    int roll;
    bool found = false;

    for(int i = 0; i<5 ;i++){
        cout<<"Enter detail of Student " << i+1 << endl;
        cout<<"Enter Name of Student : ";
        getline(cin, s[i].name);
        cout<<"Enter Roll No of Student : ";
        cin>>s[i].rollNo;
        cout<<"Enter marks of Student : ";
        cin>>s[i].marks;
        cin.ignore();
    }
     for(int i = 0; i<5 ;i++){

        cout<<"Detail of Student " << i+1 << endl;
        cout<<"Name : " << s[i].name << endl;
        cout<<"Roll No : " << s[i].rollNo << endl;
        cout<<"Marks : " << s[i].marks << endl;

    }

    cout << "Search By Roll No : " << endl;
    cout << "Enter Roll no : " ;
    cin >> roll;
    for(int i = 0; i<5 ;i++){
        if(roll == s[i].rollNo){
            cout<<"Name : " << s[i].name << endl;
            cout<<"Roll No : " << s[i].rollNo << endl;
            cout<<"Marks : " << s[i].marks << endl;
            found = true ;
        }
    }
    if(!found){
        cout << "Student not found";
    }

    return 0;
}