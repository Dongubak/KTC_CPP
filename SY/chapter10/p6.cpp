/*
다음 클래스를 사용하여 멤버 함수 정의를 작성하고, 해당 클래스를 테스트하는 프로그램을 만들어라

class Move 
{ 
private:
    double x;
    double y; 
public:
    Move(double a = 0, double b = 0); // sets x, y to a, b
    showmove() const; // shows current x, y values
    Move add(const Move & m) const;

// this function adds x of m to x of invoking object to get new x, 
// adds y of m to y of invoking object to get new y, creates a new 
// move object initialized to new x, y values and returns it

    reset(double a = 0, double b = 0); // resets x,y to a, b 
};

*/


#include <iostream>

using namespace std;

class Move 
{
private:
    double x;
    double y;

public:
    // 생성자: x와 y를 초기화
    Move(double a = 0, double b = 0) : x(a), y(b) {}

    // 현재 x, y 값을 출력하는 함수
    void showmove() const 
    {
        cout << "X: " << x << ", Y: " << y << endl;
    }

    // 현재 객체의 x, y 값과 다른 Move 객체의 x, y 값을 더하여 새로운 Move 객체 반환
    Move add(const Move & m) const 
    {
        return Move(x + m.x, y + m.y);
    }

    // x, y 값을 새로운 a, b 값으로 재설정
    void reset(double a = 0, double b = 0) 
    {
        x = a;
        y = b;
    }
};

int main() {
    Move m1(3.5, 2.5);   // x=3.5, y=2.5로 초기화된 객체 생성
    Move m2(1.5, 4.0);   // x=1.5, y=4.0으로 초기화된 객체 생성

    cout << "값:\n";
    m1.showmove();
    m2.showmove();

    // 두 Move 객체를 더한 새로운 객체 생성
    Move m3 = m1.add(m2);
    cout << "\n더하기 결과값 (m1 + m2):\n";
    m3.showmove();

    // x, y 값을 (0, 0)으로 재설정
    m1.reset();
    cout << "\n m1으로 초기화 한 결과:\n";
    m1.showmove();

    return 0;
}