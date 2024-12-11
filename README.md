# Software Requirements Specifications

## Introdution

The purpose of this document is to explain why the program that calculates the product of the minimal and the maximal element can be useful and to provide instruction how to use it.

## 1. Product of the minimal and maximal numbers in a array.

### 1.1. Purpose

1.1.1. The program is a simple program that find the product of entered values using terminal. The program is provided as a single executable file, but some parts of the code could be used as part of some bigger project

1.1.2. Brief overview:

- Inputs should be provided as a list of decimal numbers with floating point entered to a terminal using keyboard. Numbers should be divided by one or several space symbols and/or line delimeters. A floating point if exists should be written using symbol `.` Comma or any another symbol is denied.

- Output is a single number with floating point. A point can be missed if the number is integral.

1.1.3. Why it culd be useful?

The program finds the product of the minimal and the maximal values, which could be helpful for some kunds of data analitics, likes research of extreme values, checking of outline values have the same sign and many another kinds of analitics 

### 1.2. Overall Description

1.2.1. Program can be run in the terminal and interact with user with console inputs and outputs. Program requires operational system to be installed and run. The terminal is required to have ASCII support.

1.2.2. The program functions:

- It gets the input list.

- Program finds the minimal and the maximal values.

- Calculates their product.

- Prints the product as text to the terminal.

1.2.3. Operation enviroment:

- x86 competible processor.

- Windows, MacOS or Linux operation systems.

1.2.4. Assumptions and dependencies:

- The list should have lenght equal 7.

- Numbers of list should be represented as set of decimal digits with possible floating point inside, represented as symbol `.`

- Numbers in the list should be divided using one or several space, tab or new line symbol.

### 1.3. System Features

1.3.1 Functional Requirements:

- The program accepts exactly 7 double-type numbers from the user.

- Identify the smallest and the largest values in the dataset.

- Multiply the minimum and maximum values.

- Display the computed product.

### 1.4 External Interface Requirements

1.4.1 User Interfaces:

- Interface Type: Text-based console.

- The system prompts users for input and displays results in a simple, human-readable format.

1.4.2 Hardware Interfaces

- Keyboard for input.

- Monitor or console display for output.

1.4.3 Software Interfaces:

- Standard C++ libraries.

- No external dependencies.

1.4.4 Communications Interfaces.
No communication interfaces are required for this standalone application.

### 1.5. Nonfunctional Requirements

1.5.1 The program must compute the result within 1 second for a dataset of 7 numbers.

1.5.2 The program should handle unexpected behavior gracefully (e.g., empty inputs) but assumes valid input as the default case.

1.5.3 No sensitive data is processed; hence, security considerations are minimal.

1.5.4 Software Quality Attributes:

- The code is modular, making it easy to modify.

- Can run on any platform with a standard C++ compiler.

- Intuitive console interface for direct user interaction.

## 2. Matrix Multiplication Program

### 2.1. Purpose

The purpose of this program is to demonstrate the functionality of matrix multiplication using dynamically generated random matrices. It multiplies a 2x3 matrix (a) with a 3x4 matrix (b) to produce a 2x4 matrix (product). This program is intended for educational and demonstration purposes, showcasing nested loop structures and basic matrix arithmetic in C++.

2.1.2. Document Conventions

- Code style: All code snippets use C++ syntax.

- Matrix format: Matrices are represented as arrays, with a[i][j] indicating the element at row i and column j.

- Random values: Values in matrices are integers between 0 and 9.

2.1.3. Intended Audience and Reading Suggestions

This document is intended for:

- Students learning matrix multiplication and C++ programming.

- Educators looking for simple examples of nested loops and algorithm implementation.

- Developers seeking to implement or extend matrix multiplication in software.

- Readers should have basic knowledge of:

2.1.4. Project Scope
The project provides a simplified implementation of matrix multiplication. It initializes matrices with random integers, computes their product, and outputs the results. Future extensions could include:

- Dynamic size input for matrices.

- Handling non-conforming matrix sizes with error checking.

- Optimization for larger matrices using multithreading.

### 2.2. Overall Description

2.2.1. Product Perspective

This program is standalone and does not depend on external systems. It operates as a console-based application with no GUI. Inputs are hardcoded (matrix dimensions) and the program generates random values for matrices.

2.2.2. Product Features

- Generates two matrices (a and b) with predefined dimensions.

- Populates matrices with random integers.

- Performs matrix multiplication if dimensions are compatible.

- Outputs the original matrices and the resulting product in a readable format.

2.2.3. User Classes and Characteristics

- Students: Use the program to understand matrix multiplication logic.

- Educators: Demonstrate basic programming concepts and algorithm implementation.

- Programmers: Extend or optimize the program for advanced applications.

2.2.4. Operating Environment

- Platform: Any system with a C++ compiler supporting C++11 or later.

- Compiler: GCC, Clang, or MSVC.

- Operating System: Windows, macOS, or Linux.

2.2.5. Design and Implementation Constraints

- Fixed matrix sizes (2x3 and 3x4).

- Random values limited to the range 0–9.

- Limited to small matrix dimensions due to static memory allocation.

2.2.6 Assumptions and Dependencies

- Matrix dimensions conform to multiplication rules (a_columns == b_rows).

- Random number generation uses the standard library (rand() seeded with time(nullptr)).

### 2.3. System Features
2.3.1 Functional Requirements

- Generate two matrices of predefined sizes with random integers.

- Output the generated matrices in a readable format.

- Compute the product of the two matrices using nested loops.

- Display the resulting product matrix.

### 2.4. External Interface Requirements

2.4.1 User Interfaces
The program uses a command-line interface (CLI). Users can run the program to view the generated matrices and their product.

2.4.2 Hardware Interfaces

- Standard keyboard for program execution.
- Monitor to display program output.

### 2.5. Nonfunctional Requirements
5.1 Performance Requirements
The program completes matrix generation and multiplication in under 1 second for small matrices (e.g., 2x3, 3x4).

5.2 Safety Requirements
The program handles only compatible matrix sizes. Invalid sizes may lead to logical errors but do not crash the program.

5.3 Security Requirements
The program is standalone and does not involve data input from external sources, ensuring minimal security concerns.

5.4 Software Quality Attributes

- Reliability: The program produces accurate results for predefined matrix sizes.

- Maintainability: Code structure allows for easy modifications to matrix dimensions.

- Usability: Simple and clear output ensures ease of understanding.

## 3. Matrix Transformation Program

### 3.1. Introduction
3.1.1 Purpose
The purpose of this program is to demonstrate matrix operations on a 4x5 integer matrix. The program applies transformations to the matrix:

- Replacing positive elements with their natural logarithms.

- Calculating the product of all negative elements in each row.

- This program is designed for educational and demonstration purposes, showcasing how to perform element-wise operations and row-wise aggregation in C++.

3.1.2 Document Conventions

- Code style: Uses C++ syntax for all examples and explanations.

- Matrix representation: Denoted as matrix[i][j], where i is the row index and j is the column index.

- Transformation rules: Positive numbers are replaced by their natural logarithms, and the product of negative numbers is computed per row.

3.1.3 Intended Audience and Reading Suggestions
This document is intended for:

- Students learning about nested loops and array manipulations.

- Educators demonstrating basic algorithmic operations.

- Programmers seeking practical examples of matrix transformations.

3.1.4 Project Scope
This program generates a random 4x5 integer matrix, applies specific transformations to the matrix elements, and computes row-wise aggregates. Future enhancements might include:

- Allowing dynamic matrix dimensions.

- Adding support for custom transformation rules.

- Extending functionality for non-integer matrices.

3.1.5 References

- C++ Standard Documentation.

- "Numerical Recipes in C++" for logarithm and matrix-related algorithms.

### 3.2. Overall Description
3.2.1 Product Perspective
This program is standalone and console-based. It generates a matrix with random integer values, processes the matrix according to predefined rules, and outputs the results. It is designed as a simple educational tool for understanding matrix transformations.

3.2.2 Product Features

- Generates a 4x5 matrix with random integers between -99 and 98.

- Replaces positive values with their natural logarithms.

- Calculates the product of all negative numbers in each row.

- Outputs the original matrix, transformed matrix, and row-wise products.

3.2.3 User Classes and Characteristics

- Students: Use the program to understand nested loops and transformations.

- Educators: Showcase matrix operations in C++.

- Developers: Build upon this program for more complex transformations.

3.2.4 Operating Environment

- Platform: Any system with a C++ compiler supporting C++11 or later.

- Compiler: GCC, Clang, or MSVC.

- Operating System: Windows, macOS, or Linux.

3.2.5 Design and Implementation Constraints

- Fixed matrix size of 4x5.
- Random values are integers between -99 and 98.
- Logarithm calculations are limited to positive integers only.

3.2.6 Assumptions and Dependencies

- Matrix dimensions are predefined (4x5).
- The program uses standard library functions for random number generation (rand()) and logarithmic calculations (log()).
- Negative and zero values remain unchanged during logarithmic transformation.

### 3.3 System Features

3.3.1 Functional Requirements

- Generate a 4x5 matrix filled with random integers between -99 and 98.

- Replace positive elements with their natural logarithms using log().

- Compute the product of negative numbers for each row and store the results in a separate array.
Display:

- The original matrix.

- The transformed matrix.

- The array of row-wise negative products.

### 3.4. External Interface Requirements

3.4.1 User Interfaces
Command-line interface (CLI) for displaying results.

3.4.2 Hardware Interfaces

- Standard keyboard for running the program.

- Monitor to display the matrix and results.

3.4.3 Software Interfaces
C++ Standard Library:
- iostream for input/output.

- cstdlib and ctime for random number generation.

- cmath for logarithmic transformations.

### 3.5. Nonfunctional Requirements
3.5.1 Performance Requirements

The program should process the 4x5 matrix in under 1 second on modern hardware.

3.5.2 Safety Requirements

Logarithmic transformations are only applied to positive values. Negative or zero values are excluded to avoid runtime errors.

3.5.3 Security Requirements

The program operates locally and does not interact with external systems, minimizing security risks.

3.5.4 Software Quality Attributes

- Reliability: Ensures accurate calculations for all elements within the specified range.

- Maintainability: Code is structured for easy modifications to matrix dimensions or rules.

- Usability: Clear and simple outputs make it easy to understand the results.

- Portability: The program runs on any system with a C++ compiler supporting C++11 or later.
