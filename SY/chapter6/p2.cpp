/*
최대 10개의 기부금을 입력받고 평균을 계산 후 평균값과 평균보다 큰 수가 몇 개 있는지 출력하되,
입력 종료 조건은 10개의 입력이 끝나거나 문자가 아닌 걸 입력받으면 종료.
*/


#include <iostream>

using namespace std;

int main() 
{
    const int Max = 10;   // 최대 입력 개수, 상수로 정의
    double donations[Max]; // 기부금 저장 배열
    int count = 0;        // 실제 입력된 개수
    double sum = 0.0;     // 합계

    cout << Max << "개 까지 기부금을 적으시오:\n";

    // 숫자 입력 받기
    while (count < Max && cin >> donations[count]) // 두 조건을 만족할시 실행
    {
        sum += donations[count];  // 합계 누적
        count++;  
    }

    // 입력된 값이 하나도 없으면 종료
    if (count == 0) 
    {
        cout << "값이 입력되지 않았습니다.\n";
        return 0;
    }

    // 평균 계산
    double average = sum / count;
    int ac = 0; // 평균 이상인 개수

    // 평균보다 큰 값 세기
    for (int i = 0; i < count; i++) 
    {
        if (donations[i] > average) 
        {
            ac++;
        }
    }

    // 결과 출력
    cout << "평균 기부금: " << average << endl;
    cout << "평균을 넘는 기부금의 갯수: " << ac << endl;

    return 0;
}