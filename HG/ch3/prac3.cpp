#include <iostream>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_DEGREE = 60;

int main() {
    int degrees, minutes, seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "enter the degrees: ";
    cin >> degrees;
    cout << "enter the minutes of arc: ";
    cin >> minutes;
    cout << "enter the seconds of arc: ";
    cin >> seconds;

    double decimalLatitude = degrees + ( (double)minutes / MINUTES_PER_DEGREE) + ((double)seconds / (SECONDS_PER_MINUTE * MINUTES_PER_DEGREE));

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout << decimalLatitude << " degrees" << endl;

    return 0;
}
