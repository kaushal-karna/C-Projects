#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << fixed << setprecision(2);

    cout << celsius << " °C = " << fahrenheit << " °F" << '\n';

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    cout << fahrenheit << " °F = " << celsius << " °C" << '\n';

    return 0;
}