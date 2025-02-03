
/*
1.	피자 회사의 이름(단어가 여러 개일 수 있음).
	2.	피자의 지름(단위: 숫자, 소수점 가능).
	3.	피자의 무게(단위: 숫자, 소수점 가능).

위 정보를 저장할 수 있는 구조체를 설계하세요. 
이 구조체를 사용하는 프로그램을 작성하여 사용자에게 위 항목들을 입력받고, 입력받은 정보를 화면에 출력하세요. 
**cin**과 **cout**을 사용합니다.
*/


#include <iostream>
#include <string>
using namespace std;

// 피자 정보를 저장하는 구조체 정의
struct Pizza 
{
    string name; // 피자 회사 이름
    double meter;    // 피자 지름
    double weight;      // 피자 무게
};

int main() 
{
    Pizza pizza; // Pizza 구조체 변수 선언

    // 사용자로부터 정보 입력받기
    cout << "Enter the name of the pizza company: "; // 사용자로부터 이름을 입력받기위한 문장 출력
    getline(cin, pizza.name); // 회사 이름 입력받기

    cout << "Enter the diameter of the pizza (in inches): "; // 사용자로부터 피자 지름을 입력받기위한 문장 출력
    cin >> pizza.meter; // 피자 지름 입력받기

    cout << "Enter the weight of the pizza (in pounds): ";  // 사용자로부터 피자 무게를 입력받기위한 문장 출력
    cin >> pizza.weight; // 피자 무게 입력받기

    // 입력받은 정보 출력
    cout << "\nPizza Details:" << endl;
    cout << " Company Name: " << pizza.name << endl;
    cout << " Diameter: " << pizza.meter << " inches" << endl;
    cout << " Weight: " << pizza.weight << " pounds" << endl;

    return 0;
}