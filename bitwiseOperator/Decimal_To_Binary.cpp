#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int binary = 0;
    int i = 0;
    int power = 1;
    while (num != 0)
    {
        int bites = num % 2;
        binary += bites * power;
        num = num / 2;
        i++;
        power *= 10;
    }
    cout << binary;

    return 0;
}