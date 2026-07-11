# Student Grade Calculator

> Part of the **CPP Projects** series — building real applications to apply C++ and OOP concepts.

A console-based C++ application that calculates grades and percentage for multiple students across 6 subjects, and displays the overall class average using a static member.

## Problem it solves

Manually calculating percentages, assigning grades, and tracking class averages for multiple students is repetitive and error-prone. This program automates the entire process — just enter the marks and it instantly calculates everything, including validation to ensure no invalid marks are accepted.

## Features

- Enter marks for 6 subjects (English, Nepali, Math, Science, Opt. Math, Computer)
- Automatically calculates total marks and percentage
- Assigns grade based on percentage (A+ to Fail)
- Validates marks input — only accepts values between 0 and 100
- Tracks and displays class average across all students using a static member

## Grading System

| Percentage | Grade |
|---|---|
| Above 90% | A+ |
| Above 80% | A |
| Above 70% | B+ |
| Above 60% | B |
| Above 50% | C+ |
| Above 40% | C |
| 40% and below | Fail |

## How to Compile and Run

Navigate into the project folder first:

```bash
cd "12 Project part-2/Student Grade Calculator"
```

**Linux/Mac:**
```bash
g++ student_grade_calculator.cpp -o student_grade_calculator
./student_grade_calculator
```

**Windows:**
```bash
g++ student_grade_calculator.cpp -o student_grade_calculator
student_grade_calculator.exe
```

## Sample Run

```
Enter the Student Number : 2
Enter name : Milan Oli
Enter marks of English : 85
Enter marks of Nepali : 90
Enter marks of Math : 78
Enter marks of Science : 88
Enter marks of Opt.Math : 92
Enter marks of Computer : 95
Name : Milan Oli
English : 85  Nepali : 90  Math : 78 ...
Total Marks : 528
Percentage : 88
Grade : A
Average : 88
```

## OOP Concepts Applied

| Concept | Where it's used |
|---|---|
| Classes & Objects | `Student` class encapsulates all data and behaviour |
| Parameterized Constructor | Calculates percentage and updates class average on object creation |
| Static Members | `average` and `count` track class-wide data across all instances |
| Static Method | `showClassAverage()` called on class, not object (`Student::showClassAverage()`) |
| Encapsulation | All data private, accessed only through public methods |

## What I Learned

- Using a parameterized constructor to calculate derived values (percentage, average) at object creation time
- Implementing a running average using static members — updating correctly as each new student is added
- Using `do-while` for input validation — re-prompting until a valid value is entered
- Calling a static method using the class name (`Student::showClassAverage()`) rather than an object

## Possible Improvements

- Find and display the topper (student with highest percentage)
- Find and display failing students separately
- Save results to a file for record keeping
- Allow custom number of subjects instead of fixed 6
