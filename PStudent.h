#pragma once
#include "Student.h"

class PStudent : public Student {
public:
    PStudent(const string& _name, const string& _EGN, int _facultyNumber, double _averageGrade);
    bool isEligibleForScholarship() const;
    void display() const;
};
