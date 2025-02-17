/*
은행 계좌(Bank Account) 클래스를 정의하라.
데이터 멤버는 다음을 포함해야 한다:
	•	예금주(depositor)의 이름
	•	계좌 번호(account number) (문자열 string 사용)
	•	잔액(balance)

멤버 함수는 다음 기능을 제공해야 한다:
	1.	객체를 생성하고 초기화할 수 있어야 한다.
	2.	예금주의 이름, 계좌 번호, 잔액을 출력할 수 있어야 한다.
	3.	주어진 금액을 입금할 수 있어야 한다.
	4.	주어진 금액을 출금할 수 있어야 한다.

    그리고 이 기능을 보여주는 메인 함수까지 작성하라

*/
#include <iostream>
#include <string>

using namespace std;

class Bank 
{
private:
    string name;  // 예금주 이름
    string number;  // 계좌 번호
    double balance;        // 잔액

public:
    // 생성자: 계좌 정보를 초기화
    Bank(const string &Name, const string &num, double bal) 
    {
        name = Name;
        number = num;
        balance = bal;
    }

    // 계좌 정보 출력
    void display() const 
    {
        cout << "이름: " << name << "\n"
             << "계좌번호: " << number << "\n"
             << "잔액: " << balance<< "\n"; 
    }

    // 입금 함수
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << amount << "원 입금\n";
        } else 
        {
            cout << "오류\n";
        }
    }

    // 출금 함수
    void withdraw(double amount) 
    {
        if (amount > balance) 
        {
            cout << "잔액부족.\n";
        } else if (amount > 0) 
        {
            balance -= amount;
            cout << amount << "원 출금\n";
        } else 
        {
            cout << "오류\n";
        }
    }
};

int main() {
    // 계좌 생성
    Bank a1("nana", "12345678", 1000.0);

    // 계좌 정보 출력
    cout << "계좌 정보 출력:\n";
    a1.display();

    // 입금 테스트 (500 입금)
    cout << "500원 입금\n";
    a1.deposit(500);
    a1.display();  // 변경된 계좌 정보 출력

    // 출금 테스트 (300 출금)
    cout << "300원 출금\n";
    a1.withdraw(300);
    a1.display();  // 변경된 계좌 정보 출력
 
    return 0;
}