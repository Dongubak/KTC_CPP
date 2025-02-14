//함수 포인터를 활용하여 두 개의 double 값을 받아 연산하는 함수 작성
#include <iostream>
using namespace std;

double add(double x, double y) { return x + y; }
double subtract(double x, double y) { return x - y; }
double multiply(double x, double y) { return x * y; }
double divide(double x, double y) {
    if (y != 0) return x / y;
    cout << "0으로 나눌 수 없습니다!" << endl;
    return 0;
}

double calculate(double x, double y, double (*operation)(double, double)) {
    return operation(x, y);
}

int main() {
    double num1, num2;
    char choice;

    double (*pf[4])(double, double) = { add, subtract, multiply, divide };
    const char* operations[] = { "더하기", "빼기", "곱하기", "나누기" };

    cout << "두 개의 숫자를 입력하세요 (0을 입력하면 종료):" << endl;

    while (true) {
        cout << "\n첫 번째 숫자: ";
        cin >> num1;
        cout << "두 번째 숫자: ";
        cin >> num2;

        if (num1 == 0 && num2 == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        for (int i = 0; i < 4; i++) {
            cout << operations[i] << " 결과: " << calculate(num1, num2, pf[i]) << endl;
        }
    }

    return 0;
}
