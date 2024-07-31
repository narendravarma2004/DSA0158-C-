#include <iostream>
#include <iomanip>
#include <ctime>
#include <unistd.h>
using namespace std;
struct Alarm {
    int hour;
    int minute;
    bool active;
};
bool checkAlarm(const Alarm& alarm) {
    time_t now = time(NULL);
    tm* current_time = localtime(&now);
    int currentHour = current_time->tm_hour;
    int currentMinute = current_time->tm_min;

    return (alarm.active && alarm.hour == currentHour && alarm.minute == currentMinute);
}
int main() {
    Alarm alarm = {0, 0, false};
    int hour, minute;
    cout << "Enter alarm time (HH MM): ";
    cin >> hour >> minute;
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Invalid time input." << endl;
        return 1;
    }
    alarm.hour = hour;
    alarm.minute = minute;
    alarm.active = true;
    cout << "Alarm set for " << setfill('0') << setw(2) << alarm.hour << ":" 
         << setfill('0') << setw(2) << alarm.minute << endl;
    while (true) {
        cout << "Checking current time..." << endl;
        if (checkAlarm(alarm)) {
            cout << "off the reactor ! " << setfill('0') << setw(2) << alarm.hour << ":" 
                 << setfill('0') << setw(2) << alarm.minute << endl;
            break;
        } else {
            cout << "Time does not match the alarm. Waiting for 60 seconds..." << endl;
        }
        sleep(60);
    }
    return 0;
}

