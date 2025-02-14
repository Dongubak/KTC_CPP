//복권의 당첨 확률을 계산하는 프로그램
// 필드 번호 47개 중 5개 선택
// 메가 번호 27개 중 1개 선택
//경우의 수 = 47C5 * 27C1

//이걸 모델링

#include <iostream>
using namespace std;

long double combination(int n, int k) {
    long double result = 1;
    for (int i = 0; i < k; i++) {
        result *= (n - i);  
        result /= (i + 1);  
    }
    return result;
}

int main() {
    const int field_size = 47;   
    const int field_picks = 5;   
    const int mega_size = 27;    

    // 필드 번호 경우의 수 계산
    long double field_probability = combination(field_size, field_picks);

    // 메가 번호 경우의 수 계산
    long double mega_probability = mega_size;

    // 전체 당첨 확률 = 필드 확률 × 메가 번호 확률
    long double total_probability = field_probability * mega_probability;

    cout << "이 복권의 당첨 확률은 1/" << total_probability << " 입니다." << endl;

    return 0;
}
