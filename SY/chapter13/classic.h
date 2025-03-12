#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

// Cd 클래스를 상속하는 Classic 클래스 (추가적으로 대표 곡을 저장)
class Classic : public Cd {
private:
    char *primaryWork;  // 대표적인 곡 제목 (동적 할당)

public:
    // 생성자 (CD 정보 + 대표 곡 초기화)
    Classic(const char *work, const char *s1, const char *s2, int n, double x);
    
    // 복사 생성자 (깊은 복사)
    Classic(const Classic &c);
    
    // 기본 생성자
    Classic();
    
    // 소멸자 (동적 할당된 메모리 해제)
    ~Classic();
    
    // CD + 대표 곡 정보 출력
    void Report() const;
    
    // 대입 연산자 오버로딩 (깊은 복사)
    Classic &operator=(const Classic &c);
};

#endif