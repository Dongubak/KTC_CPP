#include "cd.h"
#include <cstring>

// 생성자 (문자열을 동적으로 할당하여 초기화)
Cd::Cd(const char *s1, const char *s2, int n, double x) {
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    
    selections = n;
    playtime = x;
}

// 복사 생성자 (깊은 복사 수행)
Cd::Cd(const Cd &d) {
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    
    selections = d.selections;
    playtime = d.playtime;
}

// 기본 생성자 (빈 값으로 초기화)
Cd::Cd() {
    performers = new char[1];
    performers[0] = '\0';

    label = new char[1];
    label[0] = '\0';

    selections = 0;
    playtime = 0.0;
}

// 소멸자 (동적 할당된 메모리 해제)
Cd::~Cd() {
    delete[] performers;
    delete[] label;
}

// CD 정보 출력 함수
void Cd::Report() const {
    std::cout << "Performers: " << performers << "\n"
              << "Label: " << label << "\n"
              << "Selections: " << selections << "\n"
              << "Playtime: " << playtime << " min\n";
}

// 대입 연산자 오버로딩 (깊은 복사 수행)
Cd &Cd::operator=(const Cd &d) {
    if (this == &d) return *this;  // 자기 자신 체크

    // 기존 메모리 해제
    delete[] performers;
    delete[] label;

    // 새 메모리 할당 및 복사
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    
    selections = d.selections;
    playtime = d.playtime;
    
    return *this;
}