#include <iostream>
using namespace std;

int main() {
    double kilometers, liters;

    cout << "주행 거리를 킬로미터 단위로 입력하세요: ";
    cin >> kilometers;
    cout << "사용한 연료량을 리터 단위로 입력하세요: ";
    cin >> liters;

    double liters_Per_100Km = (liters / kilometers) * 100;
    cout << "차량의 연비는 " << liters_Per_100Km << " L/100km 입니다." << endl;
    return 0;
}
