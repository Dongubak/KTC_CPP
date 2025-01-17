#include <iostream>

using namespace std;
const double INCHES_PER_FOOT = 12.0;
const double METERS_PER_INCH = 0.0254;
const double KILOGRAMS_PER_POUND = 1 / 2.2;

int main() {
    int feet, inches;
    double weightInPounds;

    cout << "키 입력 :" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    cout << "몸무게 입력(단위 : pound): ";
    cin >> weightInPounds;

    int totalHeightInInches = (feet * INCHES_PER_FOOT) + inches;

    double heightInMeters = totalHeightInInches * METERS_PER_INCH;

    double weightInKilograms = weightInPounds * KILOGRAMS_PER_POUND;

    double bmi = weightInKilograms / (heightInMeters * heightInMeters);

    cout << "\n당신의 BMI는 : " << bmi << endl;

    return 0;
}
