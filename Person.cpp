#include "Person.h"

Person::Person(const string& _name, const string& _EGN) : name(_name), EGN(_EGN) {}

string Person::getName() const { return name; }

string Person::getEGN() const { return EGN; }

void Person::display() const {
    cout << "Name: " << name << "\nEGN: " << EGN << endl;
}