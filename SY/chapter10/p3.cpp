/*
Chapter 9의 프로그래밍 연습문제 1번을 수행하되, 기존 코드 대신 Golf 클래스를 적절히 선언하여 대체하라.
	•	setgolf(golf &, const char*, int) 함수는 생성자(constructor) 로 변경해야 함.
	•	setgolf()의 상호작용(interactive) 버전을 유지하되,
		데이터를 입력받고, 생성자를 사용하여 임시 객체를 생성한 후, *this를 이용하여 현재 객체에 할당하도록 구현할 것.

*/


#include <iostream>
#include <cstring>

using namespace std;

class Golf 
{
private:
    static const int Len = 40; // 이름 최대 길이
    char fullname[Len];  // 선수 이름
    int handicap;        // 핸디캡 (골프 실력 수치)

public:
    // 기본 생성자 (매개변수가 없는 경우)
    Golf() 
    {

        fullname[0] = '\0';
        handicap = 0;
    }

    // 매개변수가 있는 생성자
    Golf(const char* name, int hc) 
    {
        strncpy(fullname, name, Len - 1);
        fullname[Len - 1] = '\0'; // 안전한 문자열 종료
        handicap = hc;
    }

    // 상호작용 버전의 setgolf() (입력 후 현재 객체 갱신)
    void setgolf() 
    {
        char name[Len];
        int hc;
        cout << "이름을 입력하세요: ";
        cin.getline(name, Len);
        cout << "핸디캡을 입력허세요: ";
        cin >> hc;
        cin.ignore(); // 입력 버퍼 비우기

        // 입력값을 기반으로 새 Golf 객체를 생성하고 현재 객체에 대입
        *this = Golf(name, hc);
    }

    // 핸디캡 변경 함수
    void setHandicap(int hc) 
    {
        handicap = hc;
    }

    // 선수 정보 출력 함수
    void showgolf() const 
    {
        cout << "선수이름: " << fullname << ", 핸디캡: " << handicap << endl;
    }
};

int main() {
    // 사용자 입력을 받아 Golf 객체 생성
    Golf g1;
    g1.setgolf();
    cout << "\n선수정보:\n";
    g1.showgolf();

    // 생성자를 이용하여 Golf 객체 생성
    Golf g2("라라", 5);
    cout << "\n선수정보:\n";
    g2.showgolf();

    // 핸디캡 변경
    cout << "\n핸디캡 변경\n";
    g2.setHandicap(3);
    g2.showgolf();

    return 0;
}