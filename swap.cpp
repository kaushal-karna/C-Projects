// Swap two variables
/* 
Using third variable
Without third vairable
Using reference variable
*/
// Using function here for swapping using reference variable
#include<iostream>
#include<iomanip>

using namespace std;

// Function with reference parameters
void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(){

    int a = 0, b = 0, c = 0;

    cout << "\n\n\nUsing third variable swapping" << endl;
    a = 5;
    b = 6;
    cout << "Initial value of a & b is: " << a <<" & " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "Swapped value of a & b is: " << a <<" & "<< b << endl << endl << endl;



    cout << "without using third variable" << endl;

    int x = 0, y = 0;

    x = 8;
    y = 9;
    cout << "Initial value of X: " << x << endl;
    cout << "Initial value of Y: " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "Swapped value of X: " << x << endl;
    cout << "Swapped value of Y: " << y << endl << endl << endl;



    cout << "Using reference variable" << endl;

    int d = 10;
    int e = 20;

    cout << "Before swapping:\n";
    cout << "d = " << d << '\n';
    cout << "e = " << e << '\n';

    swapNumbers(d, e);

    cout << "\nAfter swapping:\n";
    cout << "d = " << d << '\n';
    cout << "e = " << e << '\n';

    return 0;
}

