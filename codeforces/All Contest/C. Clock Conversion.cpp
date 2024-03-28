#include<bits/stdc++.h>
using namespace std;

string convertTo12HourFormat(string time) {
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    string period = "AM";

    if (hour >= 12) {
        period = "PM";
        if (hour > 12)
            hour -= 12;
    }

    if (hour == 0)
        hour = 12;
    string formatted_hour = (hour < 10 ? "0" : "") + to_string(hour);
    string formatted_minute = (minute < 10 ? "0" : "") + to_string(minute);

    return formatted_hour + ":" + formatted_minute + " " + period;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time;
        cin >> time;
        cout << convertTo12HourFormat(time) << endl;
    }

    return 0;
}
