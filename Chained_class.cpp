
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Student : public Person {
protected:
    int studentID;

public:
    void setStudentID(int id) {
        studentID = id;
    }

    void displayStudentID() {
        cout << "Student ID: " << studentID << endl;
    }
};

// Further derived class
class UniversityStudent : public Student {
private:
    string course;

public:
    void setCourse(string c) {
        course = c;
    }

    void displayDetails() {
        displayName();
        displayStudentID();
        cout << "Course: " << course << endl;
    }
};

int main() {
    UniversityStudent s;

    s.setName("Peter");
    s.setStudentID(202601);
    s.setCourse("Computer Engineering");

    cout << "UNIVERSITY STUDENT DETAILS" << endl;
    s.displayDetails();

    return 0;
}
