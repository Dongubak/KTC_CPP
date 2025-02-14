//최대 10개의 골프 점수 입력받고 평균 점수 게산
//사용자 10개 미만 점수 입력하고 입력 종료 가능
//함수 3개로 기능 분리

#include <iostream>
using namespace std;

const int MAX_SCORES = 10;  // 최대 입력 가능한 점수 개수

// 점수 입력 함수
int getScores(double scores[], int maxSize) {
    int count = 0;
    double input;

    cout << "최대 " << maxSize << "개의 골프 점수를 입력하세요 (음수를 입력하면 종료):" << endl;

    while (count < maxSize) {
        cout << "점수" << count + 1 << ": ";
        cin >> input;

        if (input < 0) break;  // 음수 입력 시 종료
        scores[count] = input;
        count++;
    }
    return count;  // 입력된 점수 개수 반환
}

// 점수 출력 함수
void displayScores(const double scores[], int size) {
    cout << "입력된 골프 점수: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

// 평균 계산 함수
double calculateAverage(const double scores[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += scores[i];
    }
    return total / size;
}

int main() {
    double scores[MAX_SCORES]; 
    int count = getScores(scores, MAX_SCORES);  // 점수 입력

    if (count == 0) {
        cout << "입력된 점수가 없습니다." << endl;
    }
    else {
        displayScores(scores, count);  // 점수 출력
        double average = calculateAverage(scores, count);  // 평균 계산
        cout << "평균 점수: " << average << endl;
    }
    return 0;
}
