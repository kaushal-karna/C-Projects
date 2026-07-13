/* 
Largest of Two Numbers
Use
> 
< 
>=
*/
#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    if(a > b){
        cout << a << " is greater than " << b << '\n';
    }
    else if(a < b){
        cout << b << " is greater than " << a << '\n';
    }
    else{
        cout << "Both numbers are equal." << '\n';
    }

    // Alternative
//     if (a >= b)
// {
//     if (a == b)
//     {
//         cout << "Both numbers are equal.\n";
//     }
//     else
//     {
//         cout << a << " is greater than " << b << '\n';
//     }
// }
// else
// {
//     cout << b << " is greater than " << a << '\n';
// }
    return 0;
}