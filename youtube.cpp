#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double, int); //declaration
void print_pow(double, int);

int main() //main function
{
    int base, exponent;
    cout << "what is base?: ";
    cin >> base;
    cout << "what is exponent?: ";
    cin >> exponent;

    print_pow(base, exponent);
}

double power (double base, int exponent) //definition
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;
}