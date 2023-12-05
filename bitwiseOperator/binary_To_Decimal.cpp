#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int Decimal = 0;
    int power = 1;
    while (num != 0)
    {
        int temp = num % 10;
        Decimal += temp * power;
        num /= 10;
        power *= 2;
    }
    cout << Decimal;

    return 0;
}