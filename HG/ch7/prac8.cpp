//계절별 지출을 저장하고 출력하는 프로그램

#include <iostream>
using namespace std;

const int SEASONS = 4;

struct Expenses {
    double amounts[SEASONS];
};

void fillExpenses(Expenses& exp, const char* seasons[]) {
    for (int i = 0; i < SEASONS; i++) {
        cout << seasons[i] << " 시즌의 지출을 입력하세요: ";
        cin >> exp.amounts[i];
    }
}

void showExpenses(const Expenses& exp, const char* seasons[]) {
    double total = 0.0;
    cout << "\n시즌별 지출 내역:" << endl;
    for (int i = 0; i < SEASONS; i++) {
        cout << seasons[i] << ": $" << exp.amounts[i] << endl;
        total += exp.amounts[i];
    }
    cout << "총 지출: " << total << endl;
}

int main() {
    const char* seasonNames[SEASONS] = { "봄", "여름", "가을", "겨울" };
    Expenses myExpenses; 

    fillExpenses(myExpenses, seasonNames);  // 지출 정보 입력
    showExpenses(myExpenses, seasonNames);  // 지출 정보 출력

    return 0;
}
