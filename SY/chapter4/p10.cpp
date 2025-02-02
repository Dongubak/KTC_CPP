/*
사용자에게 40야드 대시(또는 40미터) 기록을 세 번 입력받도록 요청하는 프로그램을 작성하오
그 후, 입력받은 세 번의 기록과 기록의 평균을 화면에 출력하시오
**배열 객체(array object)**를 사용하여 데이터를 저장하시오
*/

#include <iostream>
#include <array> // for std::array
using namespace std;

int main() 
{
    array<double, 3> times; // 배열 객체 생성 (3개의 기록 저장) 
    //템플릿 < >
    // 크기가 3인 double형 배열

    // 사용자로부터 3번의 기록 입력받기
    cout << "Enter the time for the 40-yd dash (in seconds):" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << "Time " << i + 1 << ": "; // 정보를 입력잗기 위한 문장 출력
        cin >> times[i]; // 기록을 times에 저장
    }

    // 기록 출력 및 평균 계산
    double total = 0.0; // 총 걸린 시간
    cout << "\nTimes entered:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        cout << " Time " << i + 1 << ": " << times[i] << " seconds" << endl;
        total += times[i]; // 총합 계산
    }

    // 평균 출력
    double average = total / 3; // 평균 계산
    cout << "\nAverage time: " << average << " seconds" << endl;

    return 0;
}