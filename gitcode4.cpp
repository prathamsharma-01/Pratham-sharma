#include <iostream>
#include <string>

using namespace std;

class NumberConverter {
private:
    int numbers[5];
    string words[5];

public:
    void getnumbers();
    void convertToWords();
    void display();
};

void NumberConverter::getnumbers() {
    cout << "Enter five integers from 0 to 9: " << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
}

void NumberConverter::convertToWords() {
    string numWords[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < 5; ++i) {
        if (numbers[i] >= 0 && numbers[i] <= 9) {
            words[i] = numWords[numbers[i]];
        } else {
            words[i] = "Invalid";
        }
    }
}

void NumberConverter::display() {
    cout << "Equivalent word values:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << words[i] << endl;
    }
}

int main() {
    NumberConverter obj;
    obj.getnumbers();
    obj.convertToWords();
    obj.display();

    return 0;
}
