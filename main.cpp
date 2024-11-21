#include <iostream>

using namespace std;

int main() {

    int total_minutes, days, hours, minutes;


    cout << "Enter the time duration in minutes: ";
    cin >> total_minutes;


    days = total_minutes / (24 * 60);
    total_minutes %= (24 * 60);
    hours = total_minutes / 60;
    minutes = total_minutes % 60;


    cout << "Equivalent time: " << days << " days, " << hours << " hours, and " << minutes << " minutes." << endl;

    return 0;
}