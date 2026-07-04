#include <iostream>
#include <string>
using namespace std;
class Contact
{
    string name;
    string number;
    string email;

public:
    Contact()
    {
        name = "";
        number = "";
        email = "";
    }
    void input()
    {
        cout << "Enter Name : ";
        getline(cin, name);
        cout << "Enter Number : ";
        cin >> number;
        cin.ignore();
        cout << "Enter Email : ";
        cin >> email;
    }
    void setName(string n) {name = n;}
    void setNumber(string num) {number = num;}
    void setEmail(string e) {email = e;}

    string getName() { return name; }
    string getNumber() { return number; }
    string getEmail() { return email; }

    void display()
    {
        cout << "Name : " << name << " Number : " << number << " Email : " << email << endl;
    }
};

class ContactBook
{
    Contact contacts[50];
    int count;
    static int totalContacts;

public:
    ContactBook()
    {
        count = 0;
    }

    void addContact();
    void displayAll();
    void searchByName();
    void deleteContact();
    void updateContact();
    void showTotal();
    
};

int ContactBook ::totalContacts = 0;

void ContactBook ::addContact()
{
    if (count < 50)
    {
        contacts[count].input();
        count++;
        totalContacts++;
    }
}
void ContactBook ::displayAll()
{

    for (int i = 0; i < count; i++)
    {
        contacts[i].display();
    }
    if (count == 0)
    {
        cout << "No Contact Found !\n";
    }
}
void ContactBook ::searchByName()
{
    string searchName;
    bool isFound = false;
    cout << "Enter a Name : ";
    getline(cin, searchName);
    for (int i = 0; i < count; i++)
    {
        if (contacts[i].getName() == searchName)
        {
            contacts[i].display();
            isFound = true;
        }
    }
    if (isFound == false)
    {
        cout << "Not Found !!\n";
    }
}
void ContactBook :: deleteContact()
{
    string searchName;
    bool isFound = false;
    cout << "Enter a Name : ";
    getline(cin, searchName);

    for (int i = 0; i < count; i++)
    {
        if (contacts[i].getName() == searchName)
        {
            isFound = true;
            for (int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
                
            }
            count--;
            totalContacts--;
            break;
        }
    }
    if (isFound)
    {
        cout << "Deleted Successfully !!\n";
    }
    else{
        cout << "Not Found !!\n";
    }
}

void ContactBook :: updateContact(){
    string searchName , name , number , email;
    int n;
    int isFound = 0;
    cout << "Enter a Name : ";
    getline(cin, searchName);

    for (int i = 0; i < count; i++)
    {
        if (contacts[i].getName() == searchName)
        {
            isFound = 1;
            
            cout << "1. Update Name \n2. Update Number \n3. Update Email \n";
            cout <<"To update select number accordingly : ";
            cin >> n;
            cin.ignore();
            switch (n)
            {
            case 1:
                 cout << "Enter a Name : ";
                 getline(cin, name);
                 contacts[i].setName(name);
                break;
             case 2:
                 cout << "Enter a Number : ";
                 getline(cin, number);
                 contacts[i].setNumber(number);
                break;
             case 3:
                 cout << "Enter a Email : ";
                 getline(cin, email);
                 contacts[i].setEmail(email);
                break;
            
            default: 
                isFound = 2;
                cout << "Selected number is not defined !\n";
                break;
            }
        }
    }
    if (isFound == 1)
    {
        cout << "Updated Successfully !!\n";
    }
    else if(isFound == 0){
        cout << "Not Found !!\n";
    }
}

void ContactBook :: showTotal(){
    cout << "Total Contacts " << totalContacts << endl;
   
}

int main(){
    ContactBook C1;
    int choice;
    do{
        cout << "1. Add Contact\n2. Display All\n3. Search\n4. Delete\n5. Update\n6. Show Total\n7. Exit\n";
        cout << "Select your choice : ";
        cin >> choice ;
        cin.ignore();

        switch (choice)
        {
        case 1:
            C1.addContact();
            break;
        case 2:
            C1.displayAll();
            break;
        case 3:
            C1.searchByName();
            break;
        case 4:
            C1.deleteContact();
            break;
        case 5:
            C1.updateContact();
            break;
        case 6:
            C1.showTotal();
            break;
       
        case 7:
            cout << "Exit !!\n";
            break;
        default:
            cout << "Choice is not exits !! Select given number .\n";
            break;
        }
    }while(choice != 7);
}