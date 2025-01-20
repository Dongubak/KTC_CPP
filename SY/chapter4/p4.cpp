
//문제: 3번 문제에서 배열대신 string 클래스로 다시 작성하시오

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    cout << "Enter your first name:";//사용자에게 이름을 입력받기 위한 문장 출력
    string fname; // 성
    getline(cin, fname); // 개행 문자가 나오기 전까지 출력을 종료하지 않음

    cout << "Enter your last name";//사용자에게 성을 입력받기 위한 문장 출력
    string lname;  // 이름
    getline(cin, lname); // 개행 문자가 나오기 전까지 출력을 종료하지 않음

    string fullname; // 성과 이름
    fullname = fname + ", " + lname; //fullname에 이어서 나오는 것들을 저장

    cout << "Here’s the information in a single string:" << fullname; // 내용 출력

    return 0;
}