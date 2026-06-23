# Student Record Manager

A simple C++ console program that stores details for multiple students and allows searching by roll number. Built as a practice project to apply `struct`, arrays, and input handling together.

## Features
- Stores name, roll number, and marks for 5 students using an array of `struct`
- Displays all student records
- Search for a student by roll number, with a "not found" message if no match exists
- Handles multi-word names correctly (e.g., "John Doe") using `getline` with proper input buffer handling

## How to Compile and Run

```bash
g++ Student_record.cpp -o Student_record
./Student_record
```

(On Windows: `Student_record.exe`)

## Sample Run

```
Enter detail of Student 1
Enter Name of Student : John Doe
Enter Roll No of Student : 101
Enter marks of Student : 88.5

...

Search By Roll No :
Enter Roll no : 101
Name : John Doe
Roll No : 101
Marks : 88.5
```

## What I Learned
- Using `struct` to group related data together
- Storing and looping through an array of structs
- A common C++ pitfall: mixing `cin >>` and `getline()` leaves a leftover newline in the input buffer, which breaks the next `getline()` call — fixed using `cin.ignore()`
- Using a `bool` flag to track whether a search found a match

## Possible Improvements
- Replace the fixed-size array with a `vector<Student>` for dynamic sizing
- Add input validation (e.g., reject non-numeric roll numbers)
- Add sorting (by marks or name)
- Move from array-based logic toward a class-based design (`Student` as a class with its own `display()` method)
