#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    string name = "Kaushal";
    int age = 21;
    string city = "Biratnagar";
    const string line = "----------------------------------------";


    cout << line << "\n";

    cout << left;
    cout << setw(6) << "Name" << ": " << name << '\n';
    cout << setw(6) << "Age"  << ": " << age  << '\n';
    cout << setw(6) << "City" << ": " << city << '\n';
    cout << line << "\n";
    return 0;
}