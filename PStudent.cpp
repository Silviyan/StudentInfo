#include "PStudent.h"

// Constructor for the PStudent class, utilizing the Student constructor
PStudent::PStudent(const string& _name, const string& _EGN, int _facultyNumber, double _averageGrade)
    : Student(_name, _EGN, _facultyNumber, _averageGrade) {}

// Check if the student is eligible for a scholarship based on their grade
bool PStudent::isEligibleForScholarship() const {
    return averageGrade > 4.50;
}

// Enhanced display function that includes scholarship eligibility
void PStudent::display() const {
    Student::display(); // Display base class attributes
    cout << "Eligible for Scholarship: " << (isEligibleForScholarship() ? "Yes" : "No") << endl;
}
