# Lowest Score Dropped (Chapter 6 – Programming Challenge 11)

A C++ program that prompts the user for five test scores, drops the lowest score, and calculates the average of the remaining four. This assignment demonstrates function design, parameter passing by reference, and modular programming.

## Overview
- Reads five validated integer test scores from the user.
- Drops the lowest score from the set.
- Calculates the average of the remaining four.
- Uses three functions:
  - `getScore(int& score)` — obtains and validates a test score.
  - `calcAverage(int a, int b, int c, int d, int e)` — computes and displays the average of the top four.
  - `findLowest(int a, int b, int c, int d, int e)` — identifies and returns the minimum score.

## Core Logic
- Each score is entered individually and validated to ensure it lies between 0 and 100.
- The lowest score is determined by comparison operations across all five.
- The average is computed as `(sum of scores − lowest) / 4.0`.
- Results are displayed with two decimal places using `setprecision(2)`.

## Input Validation
- Rejects any score less than 0 or greater than 100.
- Reprompts until a valid value is entered.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o LowestScoreDropped nazarioCPP16.cpp
  ./LowestScoreDropped
