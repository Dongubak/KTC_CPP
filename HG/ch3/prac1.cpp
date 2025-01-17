#include <iostream>
using namespace std;

const int INCHES_PER_FOOT = 12;

int main() {
	int height = 0;
	cout << "키를 정수로 입력해 주세요(단위 : inches) : ";
	cin >> height;

	int feet = height / INCHES_PER_FOOT;
	int inches = height % INCHES_PER_FOOT;

	cout << "당신의 키는 feet : " << feet << " inch : " << inches << endl;
	return 0;
}