#include <iostream>
#include <string>
using namespace std;

int main() {
    const int N = 5;
    string names[N];
    string ids[N];
    string phones[N];
cout << "==== STUDENT LIST ====\n\n" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Enter name for student " << (i + 1) << ": ";
        getline(cin, names[i]);
        
        cout << "Enter ID for student " << (i + 1) << ": ";
        getline(cin, ids[i]);
        
        cout << "Enter phone number for student " << (i + 1) << ": ";
        getline(cin, phones[i]);
        
        cout << "-------------------------------\n" << endl;
    }
    for (int i = 0; i < N; i++) {
        cout << "Student: " << (i + 1) << ": ";
        
        cout << "Name: " << (i + 1) << ": ";
       
        cout << "ID: " << (i + 1) << ": ";
        
        cout << "Phone: " << (i + 1) << ": ";
        cout << "-------------------------------\n" << endl;
        cout << "total students: " << N << endl;
    }
    return 0;
}