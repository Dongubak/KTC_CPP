//펄롱(furlong) 단위의 거리를 입력받아 **야드(yard)**로 변환하는 C++ 프로그램입니다.
//1펄롱 = 220야드
#include <iostream>
using namespace std;

int main() {
    double furlongs;  // 펄롱 값을 저장할 변수
    double yards;     // 변환된 야드 값을 저장할 변수

    // 사용자로부터 펄롱 입력 받기
    cout << "거리를 펄롱(furlong) 단위로 입력하세요: ";     //cout은 표준출력스트림객체 화면으로 데이터출력때 사용
    cin >> furlongs;                                // cin은 c++에서 표준입력을 받는객체 사용자가 키보드로입력한데이터읽을때    // >>는  사용자가입력한 값을 변수에 저장


    // 펄롱을 야드로 변환 (1 furlong = 220 yards)
    yards = furlongs * 220;

    // 결과 출력
    cout << furlongs << " 펄롱은 " << yards << " 야드입니다." << endl;    //endl은 줄바꿈

    return 0;
}
