/*

기부자들의 기부금 내역을 관리하는 코드를 작성

사용자로부터 기부자의 수를 입력받고, 각 기부자의 이름과 기부금 액수를 입력받아 저장
구조체를 사용하여 데이터를 저장하며, 동적으로 메모리를 할당
 입력받은 데이터를 기준으로 두 개의 그룹으로 분류:

 “Grand Patrons”: 10,000달러 이상 기부한 기부자 목록
 “Patrons”: 10,000달러 미만 기부한 기부자 목록

각 그룹을 출력하며, 해당 그룹에 기부자가 없으면 "none"을 출력
정렬은 필요하지 않으며, 입력된 순서대로 출력하면 됨

*/
#include <iostream>
#include <string>

using namespace std;


//구조체 선언
struct Donor 
{
    string name;
    double amount;
};

int main() 
{
    int numDonors; //기부자의 수
    
    cout << "기부자의 숫자를 입력하시오:";
    cin >> numDonors; 
    cin.ignore();  // 개행 문자 제거

    // 동적 배열 할당
    //Donors형 객체를 저장하는 배열의 크기는 numDonors으로 동적할당,그  배열에 포인터형 donors에 저장
    Donor* donors = new Donor[numDonors];

    // 기부자 정보 입력
    for (int i = 0; i < numDonors; i++) 
    {
        cout << "기부자의 이름을 입력하시오: #" << i + 1 << ": ";
        getline(cin, donors[i].name); // 개행 문자가 나오기 전까지 출력을 종료하지 않음
        cout << "기부금을 입력하시오: ";
        cin >> donors[i].amount;
        cin.ignore();  // 개행 문자 제거와 출력 종료
    }

    // Grand Patrons 출력
    cout << "\nGrand Patrons\n";
    bool hasGrandPatrons = false;
    for (int i = 0; i < numDonors; i++) 
    {
        if (donors[i].amount >= 10000) 
        {
            cout << donors[i].name << "의 기부금액: $" << donors[i].amount << endl;
            hasGrandPatrons = true;
        }
    }

    if (!hasGrandPatrons) //for문 실행시 패스, 아닐시 실행
    {
        cout << "none\n";
    }

    // Patrons 출력
    cout << "\nPatrons\n";
    bool hasPatrons = false;
    for (int i = 0; i < numDonors; i++) 
    {
        if (donors[i].amount < 10000) 
        {
            cout << donors[i].name << "의 기부금: $" << donors[i].amount << endl;
            hasPatrons = true;
        }
    }
    if (!hasPatrons) //for문 실행시 패스, 아닐시 실행
    {
        cout << "none\n";
    }

    // 동적 메모리 해제
    delete[] donors;
    
    return 0;
}