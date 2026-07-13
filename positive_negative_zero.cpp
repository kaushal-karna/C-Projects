#include<iostream>

using namespace std;
int main (){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    if( n > 0){
        cout << "The entered value " << n << " is positive." << '\n';
    }

    else if(n < 0){
        cout << "The entered value " << n << " is negative." << '\n';
    }
    
    else{
        cout << "The entered value " << n << " is zero." << '\n';
    }

    return 0;
}