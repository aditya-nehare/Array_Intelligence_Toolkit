Project Title
Array Analyzer CLI (C++)

What the Program Does
This is a menu-driven command-line application written in C++ that performs analysis and transformations on an integer array.
The project demonstrates core programming fundamentals along with proper modular C++ project structure.

Features

Display array elements
Calculate sum and average
Find maximum and minimum values
Count even and odd numbers
Count positive, negative, and zero values
Reverse the array
Linear search for an element
Find second largest element
Left and right rotation by one position
Modular design using header and source files

Project Structure
main.cpp:
Handles user interaction and menu logic. Calls functions only.

array_ops.h / array_ops.cpp:
Contains all array-related operations such as sum, reverse, rotation, and search.

file_ops.h / file_ops.cpp:
Contains file-related operations such as saving array data to a file.

How to Compile and Run

Compile:
g++ main.cpp array_ops.cpp file_ops.cpp -o array_analyzer

Run:
./array_analyzer

Notes

-No global variables are used for logic
-Each operation is implemented as a separate function
-Project follows real-world C++ modular design principles
