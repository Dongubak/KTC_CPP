/*

**Benevolent Order of Programmers(BOP)**에 가입하면, 
실명, 직업 직함(job title), 또는 비밀 BOP 이름 중 하나로 불릴 수 있다
코드를 작성하여 회원 목록을 실명, 직업 직함, 비밀 이름, 또는 직접입력함에 따라 출력하는 코드 작성

*/

#include <iostream>
using namespace std;

const int strsize = 50;
const int num = 5;  // 예제의 회원 수

// BOP 구조체 정의
struct bop 
{
    char fullname[strsize];  // 실명
    char title[strsize];     // 직업 직함
    char bopname[strsize];   // BOP 비밀 이름
    int preference;          // 0 = 실명, 1 = 직업, 2 = 비밀 BOP 이름
};

int main() 
{
    // BOP 데이터 배열 초기화
    bop members[num] = 
    {
        {"김씨", "개발자", "아아", 0},
        {"이씨", "마켓팅", "하하", 1},
        {"박씨", "마켓팅", "크크", 2},
        {"최씨", "디자이너", "케케", 0},
        {"윤씨", "엔지니어", "쿠쿠", 2}
    };

    char choice;
    
    cout << "Benevolent Order of Programmers \n";
    cout << "a.이름  b. 직함\n";
    cout << "c.비밀 이름 d. 직접입력\n";
    cout << "q. 종료\n";

    do 
    {
        cout << "\n하나를 선택하시오: ";
        cin >> choice;

        switch (choice) 
        {
            case 'a':  // 실명 출력
                for (int i = 0; i < num; i++)
                    cout << members[i].fullname << endl;
                break;

            case 'b':  // 직업 직함 출력
                for (int i = 0; i < num; i++)
                    cout << members[i].title << endl;
                break;

            case 'c':  // BOP 비밀 이름 출력
                for (int i = 0; i < num; i++)
                    cout << members[i].bopname << endl;
                break;

            case 'd':  // 직접 입력
                for (int i = 0; i < num; i++) 
                {
                    if (members[i].preference == 0)
                        cout << members[i].fullname << endl;

                    else if (members[i].preference == 1)
                        cout << members[i].title << endl;

                    else
                        cout << members[i].bopname << endl;
                }
                break;

            case 'q':  // 종료
                cout << "끝!\n";
                break;

            default:
                cout << "선택 오류. a, b, c, d, q 중에서 선택하시오.\n";
        }
    } while (choice != 'q');

    return 0;
}