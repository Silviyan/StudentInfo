#pragma once
#include "Person.h"

class Student : public Person {
protected:
    int facultyNumber;
    double averageGrade;

public:
    Student(const string& _name, const string& _EGN, int _facultyNumber, double _averageGrade);
    int getFacultyNumber() const;
    double getAverageGrade() const;
    void setFacultyNumber(int _facultyNumber);
    void setAverageGrade(double _averageGrade);
    void display() const;
};