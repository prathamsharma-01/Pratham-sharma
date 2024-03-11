#include<iostream>
#include<string>

using namespace std;

class banking {
private:
    static float interest;
    int principal;
    int time;
    string arr2[10];
public:
    void getData();
    void calculateSI();
};

float banking::interest = 2;

void banking::getData() {
    cout << "Enter principal amount:";
    cin >> principal;
    cout << "Enter time (in years):";
    cin >> time;
}

void banking::calculateSI() {
    float simpleInterest = (principal * time * interest) / 100;
    cout << "Simple Interest is: " << simpleInterest << endl;
}

int main() {
    banking b1, b2;
    b1.getData();
    b1.calculateSI();

    return 0;
}
