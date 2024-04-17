#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    string EGN;

public:
    Person(const string& _name, const string& _EGN);
    string getName() const;
    string getEGN() const;
    void display() const;
};
#pragma once
