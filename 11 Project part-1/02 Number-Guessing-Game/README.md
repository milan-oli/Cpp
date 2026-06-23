# Number Guessing Game

A console-based number guessing game in C++ where the player picks a difficulty level, has a limited number of attempts to guess a randomly generated number, and can retry or play again after losing or winning .

## Features
- Three difficulty levels (Easy, Medium, Hard), each with a different number range and attempt limit
- Tracks total attempts taken to guess correctly
- "Guess lower / Guess Higher" feedback after every guess
- If attempts run out, player can choose to retry the same difficulty or exit
- After winning, player can choose to play again with a new difficulty
- Built using multiple functions with pass-by-reference (`int&`) to share state cleanly

## How to Compile and Run

```bash
g++ Guessing_game.cpp -o Guessing_game
./Guessing_game
```

(On Windows: `Guessing_game.exe`)

## Sample Run

```
Select Level (easy = 1 ; medium = 2 ; hard = 3) : 1
You have 10 attempts to win !!
Guess a Number (1 - 100) : 50
Guess lower one !!
You have 9 attempts to win !!
Guess a Number (1 - 100) : 25
...
You successfully Guessed a number in 4 Attempts
Want to play more (y/n) : n
Thanks for your Participation !!
```

## What I Learned
- Generating random numbers with `rand()` and seeding with `srand(time(0))`
- Structuring a program across multiple functions instead of one large `main()`
- Passing variables by reference (`int&`) so functions can modify shared state (score, remaining attempts, secret number)
- A classic beginner bug: using `=` instead of `==` in a condition
- Designing nested control flow for retry-on-fail vs. replay-on-win as two distinct paths

## Possible Improvements
- Track and display a high score (fewest attempts) across sessions
- Add input validation for non-numeric guesses
- Replace difficulty if/else chains with `enum class Difficulty` for cleaner, safer code
