
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int rollNo;
    string name;
    float marks;
    Node* next;
};

Node* head = nullptr;

// Add a student
void addStudent() {
    Node* newNode = new Node;

    cout << "Enter roll number: ";
    cin >> newNode->rollNo;
    cin.ignore();

    Node* temp = head;
    while (temp != nullptr) {
        if (temp->rollNo == newNode->rollNo) {
            cout << "Roll number already exists!\n";
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter student name: ";
    getline(cin, newNode->name);

    cout << "Enter marks: ";
    cin >> newNode->marks;

    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
    }

    cout << "Student added successfully!\n";
}

// Display all students
void displayStudents() {
    if (head == nullptr) {
        cout << "No student records found.\n";
        return;
    }

    Node* temp = head;

    while (temp != nullptr) {
        cout << "\nRoll Number: " << temp->rollNo;
        cout << "\nName: " << temp->name;
        cout << "\nMarks: " << temp->marks << "\n";
        temp = temp->next;
    }
}

// Search by roll number
void searchStudent() {
    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;

    Node* temp = head;

    while (temp != nullptr) {
        if (temp->rollNo == roll) {
            cout << "Student found!\n";
            cout << "Name: " << temp->name;
            cout << "\nMarks: " << temp->marks << "\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Student not found.\n";
}

// Delete a student
void deleteStudent() {
    int roll;
    cout << "Enter roll number to delete: ";
    cin >> roll;

    Node* temp = head;
    Node* previous = nullptr;

    while (temp != nullptr && temp->rollNo != roll) {
        previous = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Student not found.\n";
        return;
    }

    if (previous == nullptr)
        head = temp->next;
    else
        previous->next = temp->next;

    delete temp;
    cout << "Student deleted successfully!\n";
}

// Sort students by roll number
void sortStudents() {
    if (head == nullptr || head->next == nullptr) {
        cout << "Not enough records to sort.\n";
        return;
    }

    for (Node* i = head; i->next != nullptr; i = i->next) {
        for (Node* j = i->next; j != nullptr; j = j->next) {
            if (i->rollNo > j->rollNo) {
                int r = i->rollNo;
                i->rollNo = j->rollNo;
                j->rollNo = r;

                string n = i->name;
                i->name = j->name;
                j->name = n;

                float m = i->marks;
                i->marks = j->marks;
                j->marks = m;
            }
        }
    }

    cout << "Students sorted successfully!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Sort Students by Roll Number\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: sortStudents(); break;
            case 6: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    // Release allocated memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
