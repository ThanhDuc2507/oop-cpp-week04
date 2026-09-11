#include <iostream>
#include <string>
using namespace std;

void showStudentName(string name) {
    cout << "Hello, " << name << "!" << endl;
    cout << "Welcome to our class!" << endl;
}

int main() {
    string studentName;
    cout << "Enter your name: ";
    getline(cin, studentName);

    showStudentName(studentName);

    return 0;
}