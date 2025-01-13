//광년단위를 천문단위로 변환하는 문제
//변환공식 1광년 = 63240천문단위
#include <iostream>
using namespace std;

// 광년 → 천문단위 변환 함수
double lightYearsToAU(double lightYears) {
    const double AU_PER_LIGHT_YEAR = 63240.0;  // 변환 상수 //const 매개변수등이 변경되지않도록 만드는 상수키워드
    return lightYears * AU_PER_LIGHT_YEAR;
}

int main() {
    double lightYears;  // 입력값(광년)을 저장할 변수
    double au;          // 변환된 천문단위를 저장할 변수

    // 사용자에게 광년 입력 요청
    cout << "몇 광년인가요: ";
    cin >> lightYears;

    // 변환 함수 호출
    au = lightYearsToAU(lightYears);

    // 결과 출력
    cout << lightYears << " 광년 = " << au << " 천문단위." << endl;

    return 0;
}
