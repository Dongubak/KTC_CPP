/*
다음 출력 예제에 나타난 것처럼 정보를 요청하고 표시하는 C++ 프로그램을 작성하시오

What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "what is your firstt name?" << endl; //사용자에게 이름을 입력받기위한 문장 출력
    char fname[20]; // 이름
    cin >> fname; // 이름 입력받고 fname에 저장

    cout << "what is your last name?" << endl; //사용자에게 성을 입력받기위한 문장 출력
    char lname[20]; // 성
    cin >> lname; // 성 입력받고 lname에 저장

    cout << "What letter grade do you deserve?" << endl; //사용자에게 등급을 입력받기위한 문장 출력
    char grade[2]; // 등급
    cin >> grade; //등급 입력받고 grade에 저장
 
    cout << "What is your age?" << endl; //사용자에게 나이를 입력받기위한 문장 출력
    int age; // 나이
    cin >> age; //나이 입력받고 age에 저장

    cout << "Name:" << fname << " " << lname << endl
        << "Grade:" << grade << endl
        << "Age:" << age << endl;

    return 0;
}