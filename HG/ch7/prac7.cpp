//포인터를 사용해서 배열을 처리하는 프로그램

#include <iostream>
using namespace std;

const int MAX = 10;  

double* fill_array(double* begin, double* end) {
    double value;
    double* ptr = begin;  
    int i = 0;

    cout << "최대 " << MAX << "개의 숫자를 입력하세요 (숫자가 아닌 값 입력 시 종료):" << endl;
    while (ptr < end) {
        cout << "숫자 " << i+1 << ": ";
        cin >> value;

        if (!cin) { 
            cin.clear();
            cin.ignore(100, '\n');
            cout << "잘못된 입력입니다. 입력을 종료합니다." << endl;
            break;
        }

        *ptr = value; 
        ptr++; 
    }
    return ptr;  
}

void show_array(const double* begin, const double* end) {
    cout << "입력된 숫자들: ";
    for (const double* ptr = begin; ptr < end; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
}

void revalue(double factor, double* begin, double* end) {
    for (double* ptr = begin; ptr < end; ptr++) {
        *ptr *= factor;
    }
}

int main() {
    double arr[MAX]; 

    double* last = fill_array(arr, arr + MAX);

    if (last > arr) {
        show_array(arr, last);  

        double factor;
        cout << "모든 값을 몇 배로 조정할까요? ";
        cin >> factor;

        revalue(factor, arr, last); 
        show_array(arr, last); 
    }
    else {
        cout << "입력된 값이 없습니다." << endl;
    }

    return 0;
}
