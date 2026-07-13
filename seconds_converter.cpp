#include<iostream>

using namespace std;

int main(){

    int total_seconds;
    const int SECONDS_PER_HOUR = 3600;
    const int SECONDS_PER_MINUTE = 60;
    cout << "Enter value in seconds: ";
    cin >> total_seconds;

    int hours = total_seconds / SECONDS_PER_HOUR;
    int remaining_seconds = total_seconds % SECONDS_PER_HOUR;
    int minutes = remaining_seconds / SECONDS_PER_MINUTE;
    int seconds = remaining_seconds % SECONDS_PER_MINUTE;
    // Logic 
    /*
    total_seconds / 3600 finds the total hours using integer division.
    total_seconds % 3600 gets the leftover seconds after removing the hours.
    remaining_seconds / 60 finds the total minutes from the leftover seconds.
    remaining_seconds % 60 gets the final remaining seconds.
    */
    cout << hours << (hours == 1 ? " Hour\n" : " Hours\n");
    cout << minutes << (minutes == 1 ? " Minute\n" : " Minutes\n");
    cout << seconds << (seconds == 1 ? " Second\n" : " Seconds\n");
    
    return 0;
}