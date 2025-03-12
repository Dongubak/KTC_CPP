
/*

배열을 사용하여 사용자에게 성과 이름을 입력받고 성과 이름 사이에 ","와 " "를 포함시키는 세 번째 배열을 만들고 출력하시오

예)

Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip

*/

#include <iostream>
#include <string>
#include <cstring> 
using namespace std;

int main()
{
    cout << "Enter your first name:"; //사용자에게 이름을 입력받기 위한 문장 출력
    const int size = 30;  // 상수선언
    char fname[size]; // 이름
    cin.getline(fname, size); // 개행 문자가 나오기 전까지 출력을 종료하지 않음

    cout << "Enter your last name"; //사용자에게 성을 입력받기 위한 문장 출력
    char lname[size]; //성
    cin.getline(lname, size); // 개행 문자가 나오기 전까지 출력을 종료하지 않음

    char fullname[30]; // 성과 이름
    strcpy(fullname, lname); // lanme를 카피해서 fullname에 저장
    strcat(fullname, ", "); // fullname뒤에 이어서 저장
    strcat(fullname, fname); // fullname뒤에 fname의 값을 이어서 저장


    cout << "Here’s the information in a single string:" << fullname;

    return 0;
}