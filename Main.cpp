#include <iostream>
#include "PStudent.h"

using namespace std;

int main() {
    PStudent pStudent1("Ivan Ivanov", "1234567890", 12345, 4.30);
    PStudent pStudent2("Maria Petrova", "0987654321", 67890, 4.75);

    cout << "Student 1:\n";
    pStudent1.display();

    cout << "\nStudent 2:\n";
    pStudent2.display();

    return 0;
}