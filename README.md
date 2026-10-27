
# Student Record Management System

A simple **C++ DSA project** that manages student records using a **Singly Linked List**.

## About the Project

The Student Record Management System is a menu-driven application developed using C++. It allows users to add, display, search, delete, and sort student records.

Each student record contains a roll number, name, and marks. The project demonstrates the practical implementation of linked lists and dynamic memory allocation.

## Features

- Add a new student record
- Display all student records
- Search for a student by roll number
- Delete a student record
- Sort students by roll number
- Prevent duplicate roll numbers
- Free allocated memory when exiting

## Technologies Used

- C++
- Data Structures and Algorithms (DSA)
- Visual Studio Code
- GCC/G++ Compiler

## Data Structure Used

### Singly Linked List

A singly linked list consists of nodes, where each node stores data and a pointer to the next node.

Each node in this project contains:
- Roll number
- Student name
- Marks
- Pointer to the next node

The `head` pointer points to the first node in the list.

## Operations and Time Complexity

| Operation | Time Complexity |
|---|---|
| Add Student | O(n) |
| Display Students | O(n) |
| Search Student | O(n) |
| Delete Student | O(n) |
| Sort Students | O(n²) |

Here, `n` represents the number of student records.

## How to Run the Project

### Prerequisites
- Visual Studio Code
- GCC/G++ compiler

### Steps

1. Clone or download this repository.
2. Open the project folder in VS Code.
3. Open the terminal in the project folder.
4. Compile the program:

   ```bash
   g++ ADSApro.cpp -o main
   ```

5. Run the program on Windows:

   ```powershell
   .\ADSApro.exe
   ```

## Sample Output

```text
===== Student Record Management System =====
1. Add Student
2. Display Students
3. Search Student
4. Delete Student
5. Sort Students by Roll Number
6. Exit

Enter your choice: 1
Enter roll number: 102
Enter student name: Rahul
Enter marks: 85
Student added successfully!
```

## Advantages

- Simple and easy-to-use interface
- Dynamic memory allocation
- No fixed-size array required
- Demonstrates important linked-list operations

## Limitations

- Student records are stored only in memory.
- Records are lost when the program exits.
- Searching requires traversing the list.

## Future Enhancements

- Store records permanently using file handling
- Update existing student details
- Search students by name
- Calculate grades based on marks

## Conclusion

This project demonstrates how a singly linked list can be used to manage student records in C++. It provides practical experience with pointers, dynamic memory allocation, insertion, deletion, searching, sorting, and time complexity analysis.

## Author

**Name:** Arava Abhiram sai  
**Course:** BE CSE AIML  
**Semester:** 3rd Semester  
**Subject:** Data Structures and Algorithms (DSA)

## Project Type

Academic Mini Project
