//숫자 쌍을 반복적으로 입력받아, 각 쌍의 조화평균을 계산하는 프로그램
//입력된 숫자 중 하나라도 0이면 프로그램 종료
//조화 평균(harmonic mean) (2.0 * x * y)/(x + y)

#include <iostream>
using namespace std;

// 조화 평균 계산 함수
double harmonicMean(double x, double y) {
    if (x + y == 0) return 0; 
    return 2.0 * x * y / (x + y);
}

int main() {
    double num1, num2;

    cout << "두 개의 숫자를 입력하세요 (0이 포함되면 종료): " << endl;

    while (true) {
        cout << "두 개의 수 입력: ";
        cin >> num1 >> num2;

        // 입력된 숫자 중 하나라도 0이면 종료
        if (num1 == 0 || num2 == 0) {
            cout << "프로그램 종료" << endl;
            break;
        }

        // 조화 평균 계산 및 출력
        double result = harmonicMean(num1, num2);
        cout << "조화 평균: " << result << endl;
    }

    return 0;
}
