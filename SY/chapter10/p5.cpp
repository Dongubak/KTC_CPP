/*

struct customer 
{ 
    char fullname[35]; 
    double payment;
};
	1.	Stack 클래스를 사용하여 고객(customer)을 추가 및 제거할 수 있도록 구현.
	2.	고객이 스택에서 제거될 때마다 해당 고객의 payment 값을 총합(running total)에 추가하고, 이를 출력해야 함.
	3.	기존의 Stack 클래스를 수정할 필요 없이, typedef를 변경하여 Item을 unsigned long 대신 customer 타입으로 변경하면 됨.
*/

#include <iostream>
#include <cstring>

using namespace std;

// 고객 정보를 저장하는 구조체
struct customer {
    char fullname[35];  // 고객 이름
    double payment;     // 결제 금액
};

// 스택 클래스 정의
class Stack {
private:
    static const int MAX = 10;  // 최대 스택 크기
    customer items[MAX];        // 고객 정보를 저장할 배열
    int top;                    // 현재 스택의 위치
    double totalPayment;         // 총 결제 금액

public:
    Stack() : top(0), totalPayment(0.0) {}  // 기본 생성자

    bool isEmpty() const { return top == 0; }  // 스택이 비어 있는지 확인
    bool isFull() const { return top == MAX; } // 스택이 가득 찼는지 확인

    bool push(const customer & c) 
    {  // 고객 추가
        if (isFull()) return false;
        items[top++] = c;
        return true;
    }

    bool pop(customer & c) 
    {  // 고객 제거
        if (isEmpty()) return false;
        c = items[--top];
        totalPayment += c.payment;  // 총 결제 금액 업데이트
        cout << "Removed: " << c.fullname << " paid $" << c.payment 
             << ", Total: $" << totalPayment << endl;
        return true;
    }
};

int main() {
    Stack customerStack;
    
    // 고객 데이터 추가
    customer c1 = {"nana", 120.50};
    customer c2 = {"haha", 200.75};
    customer c3 = {"ruru", 350.00};


    customerStack.push(c1);
    customerStack.push(c2);
    customerStack.push(c3);

    customer temp;
    while (!customerStack.isEmpty()) 
    {
        customerStack.pop(temp);
    }

    return 0;
}