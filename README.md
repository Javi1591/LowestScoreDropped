# LowestScoreDropped

A console-based C++ application that calculates student scores by dropping the lowest score in a set.  
Developed using Visual Studio as part of a classroom assignment to demonstrate array manipulation, iteration, basic input validation and formatted output.

---

## Project Overview

This project lets the user input a list of scores (e.g., quiz or test grades), identifies and drops the lowest score, then computes and displays the adjusted average (and optionally other statistics). Key learning objectives included:
- Using one-dimensional arrays to store data  
- Iterating through arrays to compute sums, minimums and averages  
- Validating user input to ensure the scores fall within a valid range  
- Output formatting for readability (e.g., using `iomanip`)  
- Applying C++ logic to real-world academic scoring scenarios

---

## Features

- Prompt the user for how many scores will be entered  
- Accept each score and validate it (e.g., score >= 0, score <= maximum)  
- Automatically find and remove the lowest score from further calculation  
- Compute the average of the remaining scores  
- Display results: original list, dropped score, new average  
- Clear console output for easy reading  

*(You can expand this section as you add extra features like percentiles, grade categories, or file I/O.)*

---

## Technologies Used

- **Language:** C++ (compatible with C++11 or later)  
- **IDE:** Visual Studio 2022 (or Visual Studio 2019)  
- **Version Control:** Git & GitHub  

---

## Getting Started

### Prerequisites
- A Windows machine with Visual Studio installed and the “Desktop development with C++” workload.  
- Or any OS/compiler that supports C++11 or later.

### Clone the repository
```bash
git clone https://github.com/Javi1591/LowestScoreDropped.git
cd LowestScoreDropped
