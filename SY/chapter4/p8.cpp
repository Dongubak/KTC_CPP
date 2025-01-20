/*
프로그래밍 연습 7번을 다시 수행하되, 구조체 변수를 선언하는 대신 **new**를 사용하여 동적으로 구조체를 할당하세요.
또한, 프로그램에서 피자 회사 이름을 요청하기 전에 피자의 지름을 먼저 요청하도록 변경하세요.
*/

#include <iostream>
#include <string>
using namespace std;

// 피자 정보를 저장하는 구조체 정의
struct Pizza 
{
    string Name; // 피자 회사 이름
    double meter;    // 피자 지름
    double weight;      // 피자 무게
};

int main() 
{
    // 구조체를 동적으로 할당
    Pizza *pizza = new Pizza;

    // 사용자로부터 정보 입력받기
    cout << "Enter the diameter of the pizza (in inches): ";  // 사용자로부터 피자지름을 입력받기위한 문장 출력
    cin >> pizza->meter; // 피자 지름 입력받기

    cin.ignore(); // 이전 입력의 개행 문자를 제거

    cout << "Enter the name of the pizza company: "; // 사용자로부터 회사 이름을 입력받기위한 문장 출력
    getline(cin, pizza->Name); // 회사 이름 입력받기

    cout << "Enter the weight of the pizza (in pounds): "; // 사용자로부터 피자 무게를 입력받기위한 문장 출력
    cin >> pizza->weight; // 피자 무게 입력받기

    // 입력받은 정보 출력
    cout << "\nPizza Details:" << endl;
    cout << " Company Name: " << pizza->Name << endl;
    cout << " Diameter: " << pizza->meter << " inches" << endl;
    cout << " Weight: " << pizza->weight << " pounds" << endl;

    // 동적 메모리 해제
    delete pizza; //메모리 누수 방지

    return 0;
}