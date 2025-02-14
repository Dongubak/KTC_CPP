#include <iostream>
using namespace std;

int Fill_array(double arr[], int size) {
    int count = 0; 
    double value;

    cout << "최대 " << size << "개의 숫자를 입력하세요 (숫자가 아닌 입력 시 종료):" << endl;
    while (count < size) {
        cout << "숫자 " << count + 1 << ": ";
        cin >> value;

        if (!cin) {  // 숫자가 아닌 값이 입력되면 종료
            cin.clear();  
            cin.ignore(100, '\n');  
            cout << "숫자가 아닌 값이 입력되었습니다. 입력을 종료합니다." << endl;
            break;
        }

        arr[count] = value;  
        count++;
    }
    return count; 
}

int main() {
    const int SIZE = 10; 
    double numbers[SIZE];  

    int filledCount = Fill_array(numbers, SIZE); 

    // 입력된 값 출력
    cout << "입력된 숫자 개수: " << filledCount << endl;
    cout << "입력된 숫자들: ";
    for (int i = 0; i < filledCount; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
