/*
class Person {
private:
    static const int LIMIT = 25;
    string lname;       // 사람의 성(last name)
    char fname[LIMIT];  // 사람의 이름(first name)

public:
    // 기본 생성자: lname을 빈 문자열, fname을 빈 문자열로 초기화
    Person() { lname = ""; fname[0] = '\0'; } // #1

    // 매개변수가 있는 생성자: 성(last name)과 이름(first name)을 설정
    Person(const string & ln, const char * fn = "Heyyou");

    // 다음 메서드는 lname과 fname을 출력하는 역할을 한다.
    void Show() const;        // "이름 성" 형식으로 출력
    void FormalShow() const;  // "성, 이름" 형식으로 출력
};

	1.	이 클래스를 완성하기 위해 Show() 및 FormalShow() 메서드를 구현하라.
	2.	이 클래스를 테스트하는 프로그램을 작성하라.
	•	세 가지 생성자 호출을 모두 사용해야 한다.
	•	두 개의 출력 메서드를 모두 호출해야 한다.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Person 
{
private:
    static const int LIMIT = 25;
    string lname;       // 성 (Last name)
    char fname[LIMIT];  // 이름 (First name)

public:
    // 기본 생성자: lname을 빈 문자열로 설정, fname을 빈 문자열로 설정
    Person() 
    {
        lname = "";
        fname[0] = '\0';
    }

    // 매개변수가 있는 생성자
    Person(const string & ln, const char * fn = "Heyyou") 
    {
        lname = ln;
        strncpy(fname, fn, LIMIT - 1);
        fname[LIMIT - 1] = '\0';  // 문자열이 초과되지 않도록 NULL 종료
    }

    // "이름 성" 형식으로 출력하는 메서드
    void Show() const 
    {
        cout << fname << " " << lname << endl;
    }

    // "성, 이름" 형식으로 출력하는 메서드
    void FormalShow() const 
    {
        cout << lname << ", " << fname << endl;
    }
};

int main() 
{
    // 기본 생성자 사용
    Person one;
    // 성만 제공, 이름은 기본값 "Heyyou" 사용
    Person two("nana");
    // 성과 이름 모두 제공
    Person three("haha", "ruru");

    // 각 객체의 정보를 출력
    cout << "one.Show(): "; one.Show();
    cout << "one.FormalShow(): "; one.FormalShow();
    cout << endl;

    cout << "two.Show(): "; two.Show();
    cout << "two.FormalShow(): "; two.FormalShow();
    cout << endl;

    cout << "three.Show(): "; three.Show();
    cout << "three.FormalShow(): "; three.FormalShow();
    cout << endl;

    return 0;
}