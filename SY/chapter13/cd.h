#ifndef CD_H_
#define CD_H_

#include <iostream>

// 기본 클래스 Cd (CD 정보를 저장하는 클래스)
class Cd {
private:
    char *performers;  // 연주자(아티스트) 이름 (동적 할당)
    char *label;       // 음반사(Label) (동적 할당)
    int selections;    // 트랙 개수
    double playtime;   // 총 재생 시간 (단위: 분)

public:
    // 생성자 (CD 정보 초기화)
    Cd(const char *s1, const char *s2, int n, double x);
    
    // 복사 생성자 (깊은 복사)
    Cd(const Cd &d);
    
    // 기본 생성자
    Cd();
    
    // 소멸자 (동적 할당된 메모리 해제)
    virtual ~Cd();
    
    // CD 정보를 출력하는 함수 (가상 함수)
    virtual void Report() const;
    
    // 대입 연산자 오버로딩 (깊은 복사)
    Cd &operator=(const Cd &d);
};

#endif