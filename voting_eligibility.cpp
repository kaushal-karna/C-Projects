#include<iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter age: ";
    cin >> age;
    
    if (age < 0){
        cout << "Invalid age.\n";
    }
    else if(age >= 18){
        cout << "Congratulations!! you are eligible for voting." << '\n';
    }
    else{
        cout << "You are not eligible for voting" << '\n';
    }
    

    return 0;
}