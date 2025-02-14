// 배열과 구조체를 활용하여 학생 정보를 입력하고 출력하는 프로그램

#include <iostream>
#include <cstring>  // strcpy(), strcmp() 사용
using namespace std;

const int SLEN = 30;

// (1) 구조체 정의
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// (2) 학생 정보를 입력받는 함수
int getinfo(student pa[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << "학생 " << i + 1 << "의 이름을 입력하세요 (Enter로 종료): ";
        cin.getline(pa[i].fullname, SLEN);
        
        if (strlen(pa[i].fullname) == 0) break;  // 이름이 빈 줄이면 입력 종료
        
        cout << "학생 " << i + 1 << "의 취미를 입력하세요: ";
        cin.getline(pa[i].hobby, SLEN);

        cout << "학생 " << i + 1 << "의 프로그래밍 수준을 입력하세요: ";
        cin >> pa[i].ooplevel;
        cin.ignore(100, '\n');  // 입력 버퍼 정리
    }
    return i;  // 입력된 학생 수 반환
}

// (3) `display1()`: 값으로 전달하여 출력
void display1(student st) {
    cout << "\n[display1] 학생 정보:" << endl;
    cout << "이름: " << st.fullname << endl;
    cout << "취미: " << st.hobby << endl;
    cout << "프로그래밍 수준: " << st.ooplevel << endl;
}

// (4) `display2()`: 주소로 전달하여 출력
void display2(const student * ps) {
    cout << "\n[display2] 학생 정보:" << endl;
    cout << "이름: " << ps->fullname << endl;
    cout << "취미: " << ps->hobby << endl;
    cout << "프로그래밍 수준: " << ps->ooplevel << endl;
}

// (5) `display3()`: 배열을 받아 모든 학생 정보 출력
void display3(const student pa[], int n) {
    cout << "\n[display3] 모든 학생 정보 출력:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "학생 #" << i + 1 << ":" << endl;
        cout << "이름: " << pa[i].fullname << endl;
        cout << "취미: " << pa[i].hobby << endl;
        cout << "프로그래밍 수준: " << pa[i].ooplevel << endl;
    }
}

int main() {
    cout << "학생 수를 입력하세요: ";
    int class_size;
    cin >> class_size;
    cin.ignore(100, '\n');  // 개행 문자 제거

    student * ptr_stu = new student[class_size];  // 동적 메모리 할당
    int entered = getinfo(ptr_stu, class_size);  // 학생 정보 입력

    // 학생 정보 개별 출력
    for (int i = 0; i < entered; i++) {
        display1(ptr_stu[i]);  // 값 전달
        display2(&ptr_stu[i]); // 주소 전달
    }

    display3(ptr_stu, entered);  // 모든 학생 정보 출력

    delete[] ptr_stu;  // 동적 할당된 메모리 해제
    cout << "프로그램 종료\n";

    return 0;
}
