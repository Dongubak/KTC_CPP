/*
주어진 클래스(cd정보를 저장하는)를 사용하여
새로운 Classic 클래스를 Cd에서 상속받아 주요 곡을 추가해야함
프로그램 작성해서 classic클래스 테스트 하기
*/


#include "classic.h"

// CD 정보를 출력하는 함수 (참조를 사용하여 다형성 확인)
void Bravo(const Cd &disk) {
    disk.Report();
}

int main() {
    // Cd 및 Classic 객체 생성
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2("Piano Sonata in B flat, Fantasia in C", 
               "Alfred Brendel", "Philips", 2, 57.17);

    // Cd 포인터를 사용하여 Classic 객체 다형성 테스트
    Cd *pcd = &c1;

    std::cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    std::cout << "\nUsing type Cd * pointer to objects:\n";
    pcd->Report();  
    pcd = &c2;
    pcd->Report();

    std::cout << "\nCalling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    std::cout << "\nTesting assignment:\n";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}