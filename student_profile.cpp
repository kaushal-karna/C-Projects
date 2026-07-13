#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    string name = "Kaushal Karn";
    int age = 21;
    float height = 5.8f;
    double cgpa = 3.55;
    bool passed = true;
    
    cout<<fixed<<setprecision(2)<< boolalpha;
    

// Using '\n' instead of endl is often preferred because endl also flushes the output buffer, which can be slower if used frequently
  cout << "Name   : " << name << '\n'
     << "Age    : " << age << '\n'
     << "Height : " << height << '\n'
     << "CGPA   : " << cgpa << '\n'
     << "Passed : " << passed << '\n';
    return 0;
}