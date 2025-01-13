//섭씨를 입력받아 화씨로 변환하는 문제
//화씨 = 1.8 x 섭씨 +32.0

#include <iostream>
using namespace std;

// 섭씨 → 화씨 변환 함수 선언
double cf(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {
    double c;      // 사용자 입력(섭씨 온도)을 저장할 변수
    double f;   // 변환된 화씨 온도를 저장할 변수

    // 사용자에게 섭씨 온도 입력 요청
    cout << "섭씨온도 입력: ";
    cin >> c;

    // 섭씨 → 화씨 변환 함수 호출
    f = cf(c);

    // 결과 출력
    cout << c << " 섭씨는 " << f << " 화씨" << endl;

    return 0;
}
