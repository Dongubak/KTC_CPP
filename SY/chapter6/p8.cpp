/*
	1.	텍스트 파일을 연다
	2.	파일 끝까지 한 글자씩 읽는다
	3.	파일에 포함된 총 문자 수를 출력한다
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ifstream inFile("input.txt"); // 파일을 연다.
    if (!inFile) 
    {
        cerr << "파일 열기 실패.\n"; // 파일을 열 수 없는 경우 오류 메시지 출력
        return 1;
    }

    char ch;
    int count = 0;

    // 파일을 한 글자씩 읽으며 개수를 센다.
    while (inFile.get(ch)) 
    {
        count++;
    }

    inFile.close(); // 파일 닫기

    cout << "파일에 포함된 문자의 수: " << count << endl;

    return 0;
}