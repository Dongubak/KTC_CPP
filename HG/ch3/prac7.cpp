#include <iostream>

using namespace std;

const double KM_TO_MILES = 62.14;  // 100킬로미터 = 62.14마일    
const double LITERS_PER_GALLON = 3.875; // 1갤런 = 3.875리터

int main() {
    double litersPer100Km;

    cout << "유럽식 연비를 입력하세요 (L/100km): ";
    cin >> litersPer100Km;

    double milesPerGallon = KM_TO_MILES / (litersPer100Km / LITERS_PER_GALLON);

    cout << litersPer100Km << " L/100km는 약 "
        << milesPerGallon << " MPG 입니다." << endl;

    return 0;
}
