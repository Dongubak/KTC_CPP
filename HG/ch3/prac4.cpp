#include <iostream>

using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

int main() {
    long long totalSeconds;

    cout << "초 단위 정수를 입력하세요: ";
    cin >> totalSeconds;

    long long days = totalSeconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);
    long long remainingSeconds = totalSeconds % (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);

    long long hours = remainingSeconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);
    remainingSeconds %= (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);

    long long minutes = remainingSeconds / SECONDS_PER_MINUTE;
    long long seconds = remainingSeconds % SECONDS_PER_MINUTE;

    cout << totalSeconds << " 초 = "
        << days << " 일, "
        << hours << " 시간, "
        << minutes << " 분, "
        << seconds << " 초" << endl;

    return 0;
}