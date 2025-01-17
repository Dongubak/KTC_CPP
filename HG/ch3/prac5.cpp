#include <iostream>

using namespace std;

int main() {
    long long worldPopulation, nationPopulation;

    cout << "세계 인구를 입력하세요: ";
    cin >> worldPopulation;
    cout << "특정 국가의 인구를 입력하세요: ";
    cin >> nationPopulation;

    double percentage = (double)(nationPopulation) / worldPopulation * 100;

    cout << "특정 국가의 인구는 세계 인구의 " << percentage << "% 입니다." << endl;

    return 0;
}
