//두개의 사용자 정의 함수를 호출하고 지정된 출력 생성
//두개의 정의 함수와 main()함수로 구성
#include <iostream>
using namespace std;

// 첫 번째 함수: "Three blind mice" 두 번 출력
void print1() {
    cout << "Three blind mice" << endl;
    cout << "Three blind mice" << endl;
}

// 두 번째 함수: "See how they run" 두 번 출력
void print2() {
    cout << "See how they run" << endl;
    cout << "See how they run" << endl;
}

int main() {
    // 두 사용자 정의 함수 호출
    print1();  // 첫 번째 함수 호출
    print2();   // 두 번째 함수 호출

    return 0;
}
