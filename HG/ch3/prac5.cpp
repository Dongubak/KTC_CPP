#include <iostream>


using namespace std;

int main() {
    long long worldPopulation, nationPopulation;

    cout << "세계 인구를 입력하세요: ";
    cin >> worldPopulation;
    cout << "특정 국가의 인구를 입력하세요: ";
    cin >> nationPopulation;
// a || b   a = true => b 확인 없이 참!! (오류 검출할 때 사용) (? :삼항 연산자)
    double percentage = (double)(nationPopulation) / worldPopulation * 100; //static<cast> 

    cout << "특정 국가의 인구는 세계 인구의 " << percentage << "% 입니다." << endl;

    return 0;
}
