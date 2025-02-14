// 재귀 함수 사용하여 팩토리얼 계산
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1; 
    return n * factorial(n - 1);
}

int main() {
    int num;

    while (true) {
        cout << "팩토리얼을 계산할 숫자를 입력하세요 (음수를 입력하면 종료): ";
        cin >> num;
        if (num < 0) {  
            cout << "프로그램을 종료합니다." << endl;
            break;
        }
        cout << num << "! = " << factorial(num) << endl;  
    }

    return 0;
}
