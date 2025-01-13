//사용자로부터 나이를 입력받아 개월수로 변환하는 문제
#include <iostream>
using namespace std;

int main() {
    int age;         // 나이를 저장할 변수
    int Months; // 나이를 개월 수로 변환한 값

    // 사용자에게 나이 입력 요청
    cout << "Enter your age: ";
    cin >> age;  // 사용자 입력을 age에 저장

    // 나이를 개월 수로 변환 (1년 = 12개월)
    Months = age * 12;

    // 결과 출력
    cout << "Your age in months is " << Months << "." << endl;

    return 0;
}
