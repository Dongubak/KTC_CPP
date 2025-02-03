/*
Candybar라는 이름의 구조체를 선언하고 그 요소는 브랜드 이름, 무게, 칼로리이다. 
snack이라는 변수를 선언함과 동시에 각 요소의 값을 Mocha Munch, 2.3, 350으로 초기화 해라
*/

#include <iostream>
#include <string>

using namespace std;


//구조체 선언과 이름
struct CandyBar 
{
    string brand;   // 캔디바의 브랜드 이름
    double weight;  // 캔디바의 무게
    int calories;   // 캔디바의 칼로리
};

int main() 
{
    // snack 변수를 선언함과 동시에 초기화
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    // 결과 출력
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << " grams" << endl;
    cout << "Calories: " << snack.calories << " kcal" << endl;

    return 0;
}