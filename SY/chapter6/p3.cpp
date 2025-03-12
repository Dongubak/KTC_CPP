/*
프로그램은 메뉴를 출력하고, 4가지 선택지를 제공해라
	•	c → carnivore (육식 동물)
	•	p → pianist (피아니스트)
	•	t → tree (나무)
	•	g → game (게임)
사용자가 잘못된 문자를 입력하면 올바른 값을 입력할 때까지 반복해서 입력을 요구하고 올바른 선택을 하면 switch문을 이용해서 해당 동작 출력

*/

#include <iostream>

using namespace std;

int main() 
{
    char choice;

    // 메뉴 출력
    cout << "다음 보기 중 하나를 선택하시오:\n";
    cout << "c) carnivore\np) pianist\nt) tree\ng) game\n";


    // 유효한 입력이 들어올 때까지 반복
    while (true) 
    {
        cin >> choice;

        if (choice == 'c' || choice == 'p' || choice == 't' || choice == 'g') 
        {
            break; // 조건에 맞으면 반복문 종료
        }

        // 잘못된 입력 시 다시 입력 요청
        cout << "c, p, t, g 중에서 다시 입력하세요: ";
    }

    switch (choice) 
    {
        case 'c': cout << "carnivores.\n"; break;
        case 'p': cout << "pianist.\n"; break;
        case 't': cout << "tree.\n"; break;
        case 'g': cout << "game.\n"; break;
    }

    return 0;
}