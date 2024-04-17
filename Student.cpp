#include "Student.h"

// Constructor for the Student class, initializing the Person part and its own attributes
Student::Student(const string& _name, const string& _EGN, int _facultyNumber, double _averageGrade)
    : Person(_name, _EGN), facultyNumber(_facultyNumber), averageGrade(_averageGrade) {}

// Getter for facultyNumber
int Student::getFacultyNumber() const {
    return facultyNumber;
}

// Getter for averageGrade
double Student::getAverageGrade() const {
    return averageGrade;
}

// Setter for facultyNumber
void Student::setFacultyNumber(int _facultyNumber) {
    facultyNumber = _facultyNumber;
}

// Setter for averageGrade
void Student::setAverageGrade(double _averageGrade) {
    averageGrade = _averageGrade;
}

// Display function, uses the Person display and adds its own details
void Student::display() const {
    Person::display(); // Display the base class attributes
    cout << "Faculty Number: " << facultyNumber << "\nAverage Grade: " << averageGrade << endl;
}