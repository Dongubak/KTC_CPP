/*

이 프로그램은 단어를 하나씩 입력받다가 “q” 를 입력하면 종료
그 후, 입력된 단어들의 첫 글자를 기준으로 다음과 같이 분류
	1.	모음(a, e, i, o, u)으로 시작하는 단어 개수
	2.	자음으로 시작하는 단어 개수
	3.	알파벳이 아닌 문자(숫자, 특수문자 등)로 시작하는 단어 개수

 문제를 해결:
	•	isalpha()를 사용하여 첫 글자가 알파벳인지 확인
	•	if 또는 switch 문을 이용하여 첫 글자가 모음인지 확인
	•	cin >> word를 사용하여 공백을 기준으로 단어 단위 입력을 받음

*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() 
{
    string word; // 문자열 변수 선언
    int v = 0, c = 0, others = 0;  //모음, 자음, 그외

    cout << "단어를 입력하세요 (q를 입력하면 종료):\n";

    while (cin >> word) 
    {
        if (word == "q") break; // "q" 입력 시 반복문 종료

        char first = word[0]; // 첫 글자 가져오기

        if (isalpha(first)) // 첫 글자가 알파벳이면 실행
        { 
            first = tolower(first); // 소문자로 변환하여 비교
            switch (first) 
            {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    v++; // 모음
                    break; // 조건문 종료
                default:
                    c++; // 자음
            }
        } 

        else 
        {
            others++; // 알파벳이 아니면
        }
    }

    // 결과 출력
    cout << v << "개가 모음으로 시작함\n";
    cout << c << "개가 자음으로 시작함\n";
    cout << others << "개는 그 외\n";

    return 0;
}