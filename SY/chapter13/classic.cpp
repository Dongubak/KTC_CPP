#include "classic.h"
#include <cstring>

// 생성자 (대표 곡을 포함한 Classic CD 정보 초기화)
Classic::Classic(const char *work, const char *s1, const char *s2, int n, double x)
    : Cd(s1, s2, n, x) {
    primaryWork = new char[strlen(work) + 1];
    strcpy(primaryWork, work);
}

// 복사 생성자 (깊은 복사)
Classic::Classic(const Classic &c) : Cd(c) {
    primaryWork = new char[strlen(c.primaryWork) + 1];
    strcpy(primaryWork, c.primaryWork);
}

// 기본 생성자 (빈 값 초기화)
Classic::Classic() : Cd() {
    primaryWork = new char[1];
    primaryWork[0] = '\0';
}

// 소멸자 (동적 할당된 메모리 해제)
Classic::~Classic() {
    delete[] primaryWork;
}

// CD 정보 + 대표 곡 정보 출력 (오버라이딩)
void Classic::Report() const {
    Cd::Report();  // 부모 클래스의 Report() 호출
    std::cout << "Primary Work: " << primaryWork << "\n";
}

// 대입 연산자 오버로딩 (깊은 복사 수행)
Classic &Classic::operator=(const Classic &c) {
    if (this == &c) return *this;  // 자기 자신 체크

    // 부모 클래스의 대입 연산자 호출
    Cd::operator=(c);

    // 기존 메모리 해제 후 새 메모리 할당 및 복사
    delete[] primaryWork;
    primaryWork = new char[strlen(c.primaryWork) + 1];
    strcpy(primaryWork, c.primaryWork);
    
    return *this;
}