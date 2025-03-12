/*

Neutronia 왕국에서는 통화 단위가 tvarp이며, 다음과 같은 소득세 규정이 적용됨
	1.	첫 5,000 tvarp: 세금 0%
	2.	다음 10,000 tvarp (5,001~15,000): 세금 10%
	3.	다음 20,000 tvarp (15,001~35,000): 세금 15%
	4.	35,000 tvarp 초과분: 세금 20%

 반복문을 사용하여 소득을 입력받고 세금을 계산
 음수나 비숫자 입력이 들어오면 프로그램 종료
 사용자의 입력에 따라 세금을 계산 후 출력

*/

#include <iostream>

using namespace std;


// 세금을 계산하는 함수
double Tax(double income) 
{
    double tax = 0; //세금

    if (income > 35000) 
    {
        tax += (income - 35000) * 0.20;
        income = 35000;
    }

    if (income > 15000) 
    {
        tax += (income - 15000) * 0.15;
        income = 15000;
    }

    if (income > 5000) 
    {
        tax += (income - 5000) * 0.10;
        income = 5000;
    }
    // 첫 5000 tvarp는 세금 없음

    return tax;
}

int main() 
{
    double income; //수익
    
    while (true) //무한반복
    {
        cout << "수입을 입력하시오 : (음수 입력시 종료): ";
        cin >> income;

        if (cin.fail() || income < 0) 
        {  
            // 입력이 숫자가 아니거나 음수이면 반복문 종료
            cout << "종료.\n";
            break;
        }

        double tax = Tax(income);
        cout << "세금은: " << tax << " tvarps\n";
    }

    return 0;
}