

// 프로그래밍 연습 6번을 다시 수행하되, 세 개의 CandyBar 구조체 배열을 선언하는 대신 **new**를 사용하여 배열을 동적으로 할당하세요.


#include <iostream>
#include <string>
using namespace std;

// CandyBar 구조체 정의
struct CandyBar 
{
    string name;  // 캔디바 브랜드 이름
    double weight; // 캔디바 무게
    int calories;  // 캔디바 칼로리
};

int main() 
{
    // CandyBar 배열을 동적으로 할당
    CandyBar *snacks = new CandyBar[3];

    // 배열을 동적으로 초기화
    snacks[0] = {"wow", 2.3, 350};
    snacks[1] = {"yeah", 1.8, 250};
    snacks[2] = {"hou", 2.0, 300};

    // 배열 내용 출력
    for (int i = 0; i < 3; i++) 
    {
        cout << "CandyBar " << i + 1 << ":" << endl;
        cout << " Brand: " << snacks[i].name << endl;
        cout << " Weight: " << snacks[i].weight << " lbs" << endl;
        cout << " Calories: " << snacks[i].calories << " kcal" << endl;
        cout << endl;
    }

    // 동적 메모리 해제
    delete[] snacks; //메모리 누수 방지

    return 0;
}