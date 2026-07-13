// Calculator
/*
Support:
+
-
*
/
%

*/

#include<iostream>

using namespace std;

int main(){

    char op;
    cout << "Enter operator: " << endl;
    cin >> op;

    int a, b;
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;


    switch (op)
    {
        case '+':
            cout << a << " + " << b << " = " << a + b << '\n';
            break;

        case '-':
            cout << a << " - " << b << " = " << a - b << '\n';
            break;

        case '*':
            cout << a << " * " << b << " = " << a * b << '\n';
            break;

        case '/':
            if( b !=0){
                cout << a << " / " << b << " = " << static_cast<double>(a) / b << '\n';
            }
            else{
                cout << "Division by zero is not allowed.";
            }
            break;

        case '%':
            if(b !=0){
            cout << a << " % " << b << " = " << a % b << '\n';
            }
            else{
                cout << "Modulo by zero is not allowed.";
            }
            break;
        
        default:
            cout << "Invalid operand. Try again!!!" << endl;
            break;
    }

    return 0;
}