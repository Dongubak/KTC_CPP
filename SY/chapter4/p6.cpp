
//세 개의 CandyBar 구조체 배열을 생성하고, 값을 직접 선택하여 초기화한 다음, 각 구조체의 내용을 출력하는 프로그램을 작성하시오.



#include <iostream>
#include <string>
using namespace std;


// 구조체의 선언, 이름
struct CandyBar 
{
    string brand;  // 브랜드 이름
    double weight; // 무게
    int calories;  // 칼로리
};

int main() 
{
    // CandyBar 구조체 배열 선언 및 초기화
    CandyBar snacks[3] = 
    {
        {"wow", 2.3, 350}, // snacks[0]
        {"yeah", 1.8, 250}, // snacks[1]
        {"hou", 2.0, 300} // snacks[2]
    };

    // 각 구조체의 내용 출력
    for (int i = 0; i < 3; i++) 
    {
        cout << "CandyBar " << i + 1 << ":" << endl;
        cout << " Brand: " << snacks[i].brand << endl;
        cout << " Weight: " << snacks[i].weight << " lbs" << endl;
        cout << " Calories: " << snacks[i].calories << " kcal" << endl;
        cout << endl;
    }

    return 0;
}