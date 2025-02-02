/*
문제: 사용자에게 문자를 '@'가 나올 때까지 입력받고 입력받은 걸 출력하되,
숫자는 출력하지 않고 대문자는 소문자로, 소문자는 대문자로 출력.
cctype 사용.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "원하는 문자를 입력하시오:\n";
    char ch;

    while (cin.get(ch) && ch != '@') // 사용자로부터 입력받고 그것이 @랑 다르면 실행
    {
        if (isdigit(ch)) // ch가 숫자면 반복문 처음으로 돌아감.
            continue;
        
        if (isupper(ch)) // ch가 대문자면 실행
        {
            ch = tolower(ch); // ch를 소문자로 바꿈
        }
        else if (islower(ch)) // ch가 소문자면 실행
        {
            ch = toupper(ch); // ch를 대문자로 바꿈
        }
        cout << ch;
    }

    cout << "\n끝!";

    return 0;
}