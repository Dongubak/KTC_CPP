
/*
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); // 개행 문자까지 읽기
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}

*/

//문제 : 위의 코드를 배열 대신 string 클래스를 사용해서 다시 쓰시오


#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your name:\n"; //사용자에게 이름을 입력받기위한 문장 출력
    string name;  // 이름
    getline(cin, name); // 개행 문자가 나타나기 전까지 출력을 종료하지 않음

    cout << "Enter your favorite dessert:\n";
    string dessert;  // 디저트
    cin >> dessert; // 사용자에게 입력받은 문자열을 dessert에 저장

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}