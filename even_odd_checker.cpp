#include<iostream>

using namespace std;

int main(){

    int n;

    cout << "Enter value to check if it is even or odd: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "The entered value " << n << " is even." << endl;
    }

    else{
        cout << "The entered value " << n << " is odd." << endl; 
    }

 return 0;
 
}