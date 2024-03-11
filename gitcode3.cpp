#include <iostream>
#include <string>

using namespace std;

class Students {
private:
    char name[50];
    float marks[5];
public:
    void getDetails();
    void displayDetails();
};

void Students::getDetails() {
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for five subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

void Students::displayDetails() {
    cout << "\nStudent Name: " << name << endl;
    cout << "Marks:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
    }

    float totalMarks = 0;
    for (int i = 0; i < 5; ++i) {
        totalMarks += marks[i];
    }

    float percentage = (totalMarks / 5);
    char grade;

    if (percentage > 80)
        grade = 'E';
    else if (percentage >= 70)
        grade = 'A';
    else if (percentage >= 60)
        grade = 'B';
    else if (percentage >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;
}

int main() {
    Students obj;
    obj.getDetails();
    obj.displayDetails();

    return 0;
}
