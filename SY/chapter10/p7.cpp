/*
베텔기우스 플로그(Betelgeusean plorg)는 다음과 같은 속성을 가진다:

데이터 (Data)
	•	플로그는 최대 19자의 이름을 가진다.
	•	플로그는 contentment index (CI, 만족도 지수) 를 가지며, 이는 정수이다.

연산 (Operations)
	•	새로운 플로그는 이름을 가지며, 기본 CI 값은 50이다.
	•	플로그의 CI는 변경될 수 있다.
	•	플로그는 자신의 이름과 CI를 출력할 수 있다.
	•	기본 플로그의 이름은 "Plorga"이다.

Plorg 클래스 선언을 작성하라. (데이터 멤버 및 멤버 함수 프로토타입 포함)
멤버 함수의 정의를 작성하라.
Plorg 클래스의 모든 기능을 보여주는 짧은 프로그램을 작성하라.
*/


#include <iostream>
#include <cstring>

using namespace std;

class Plorg {
private:
    static const int nl= 20;
    char name[nl];  // 최대 19자 이름 + NULL 문자
    int CI;               // 만족도 지수 (contentment index)

public:
    // 기본 생성자 (이름을 "Plorga", CI를 50으로 설정)
    Plorg(const char* n = "Plorga", int ci = 50) {
        strncpy(name, n, nl - 1);
        name[nl - 1] = '\0';  // 안전한 문자열 종료
        CI = ci;
    }

    // CI 값을 변경하는 함수
    void setCI(int ci) 
    {
        CI = ci;
    }

    // 이름과 CI를 출력하는 함수
    void show() const 
    {
        cout << "Plorg Name: " << name << ", CI: " << CI << endl;
    }
};

int main() 
{
    // 기본 Plorg 객체 생성
    Plorg p1;
    p1.show();

    // 새로운 Plorg 객체 생성
    Plorg p2("Betelgeusian X", 75);
    p2.show();

    // CI 변경
    p2.setCI(90);
    cout << "After changing CI:\n";
    p2.show();

    return 0;
}