//사용자로부터 시, 분값을 받아 시:분 형식으로 출력하는 문제

#include <iostream>    //입출력
using namespace std;  

// 시간과 분을 출력하는 함수 (반환값 없음)
void showTime(int hours, int minutes) {
    cout << "시간은 : " << hours << ":" << minutes << endl;
}

int main() {
    int hours;   // 시간 저장 변수
    int minutes; // 분 저장 변수

    // 사용자로부터 시간 입력
    cout << "몇시?: ";
    cin >> hours;

    // 사용자로부터 분 입력
    cout << "몇분?: ";
    cin >> minutes;

    // showTime 함수 호출
    showTime(hours, minutes);

    return 0;
}
