//box 구조체를 이용하여 부피를 계산하여 출력하는 프로그램으로
//이때 2개의 함수를 사용합니다.
//구조체를 값으로 전달 받아서 그대로 출력하는 함수
// 구조체를 포인터로 전달 받아서 부피를 계산하고 저장하는 함수


#include <iostream>
using namespace std;

struct box {
    char maker[40];   
    float height;     
    float width;      
    float length;     
    float volume;     
};

//상자 정보 출력
void showBox(box b) {
    cout << "제조사: " << b.maker << endl;
    cout << "높이: " << b.height << endl;
    cout << "너비: " << b.width << endl;
    cout << "길이: " << b.length << endl;
    cout << "부피: " << b.volume << endl;
}

//부피 계산
void setVolume(box* b) {
    b->volume = b->height * b->width * b->length;
}

int main() {
    box myBox = { "SuperBox", 2.5, 3.0, 4.0, 0 };  

    cout << "부피 계산 전:\n";
    showBox(myBox);

    // 부피 계산 함수 호출
    setVolume(&myBox);

    cout << "\n부피 계산 후:\n";
    showBox(myBox);

    return 0;
}
