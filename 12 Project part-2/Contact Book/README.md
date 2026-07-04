# Contact Book

A console-based contact management application in C++ that allows users to add, search, update, and delete contacts through a simple menu-driven interface.

## Problem it solves
Keeping track of contacts manually is messy and error-prone. This program provides a simple, organized system to store and manage up to 50 contacts — with instant search, update, and delete functionality — all from the terminal.

## Features
- Add a new contact (name, phone number, email)
- Display all saved contacts
- Search contact by name
- Delete a contact by name (with automatic array shifting)
- Update an existing contact's name, number, or email
- Track total contacts added using a static member

## How to Compile and Run

Navigate into the project folder first:

```bash
cd "12 Project part-2/Contact Book"
```

**Linux/Mac:**
```bash
g++ 01_contactBook.cpp -o 01_contactBook
./01_contactBook
```

**Windows:**
```bash
g++ 01_contactBook.cpp -o 01_contactBook
01_contactBook.exe
```

## Sample Run

```
1. Add Contact
2. Display All
3. Search
4. Delete
5. Update
6. Show Total
7. Exit
Select your choice : 1
Enter Name : Milan Oli
Enter Number : 9812345678
Enter Email : milan@gmail.com
```

## What I Learned
- Designing two cooperating classes (`Contact` and `ContactBook`) with clear responsibilities
- Using a default constructor to initialize an array of objects
- Getter and setter methods for controlled access to private members
- Shifting array elements left after deletion to avoid gaps
- Using a `static` member to track total contacts across all instances
- Managing `cin` and `getline` together without buffer issues (`cin.ignore()`)

## Possible Improvements
- Save and load contacts from a file so data persists between sessions
- Add duplicate phone number detection before saving
- Replace fixed array with `vector<Contact>` for unlimited contacts
- Add sorting contacts alphabetically by name
