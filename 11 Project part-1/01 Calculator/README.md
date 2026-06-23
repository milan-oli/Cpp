# Simple Calculator

A console-based calculator in C++ that performs addition, subtraction, multiplication, and division on two numbers, with error handling for division by zero.

## Features
- Supports `+`, `-`, `*`, `/` operators
- Handles division by zero with an "Error!!" message instead of crashing
- Handles invalid/unexpected operators gracefully
- Uses `double` for inputs, so it works with decimal numbers too

## How to Compile and Run

```bash
g++ Calculator.cpp -o Calculator
./Calculator
```

(On Windows: `Calculator.exe`)

## Sample Run

```
Enter a first number : 10
Enter a Operator (+,-,*,/) : /
Enter a second number : 2
10 / 2 = 5
```

```
Enter a first number : 10
Enter a Operator (+,-,*,/) : /
Enter a second number : 0
Error!!
```

## What I Learned
- Using `switch` statements to branch on an operator character
- A classic `switch` bug: forgetting `break;` causes fall-through into the next case (or `default`) even after valid input
- Basic error handling for an invalid operation (division by zero) without crashing the program

## Possible Improvements
- Loop the program so multiple calculations can be done without restarting
- Add validation for non-numeric input
- Support more operators (e.g., modulus `%`, power `^`)
