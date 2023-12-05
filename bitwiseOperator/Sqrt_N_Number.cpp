#include <iostream>
using namespace std;

int main()
{
    int UserInputA;
    int UserInputB;
    cout << "Enter the number A : ";
    cin >> UserInputA;
    cout << "Enter the number B : ";
    cin >> UserInputB;
    int sqrt = 1;
    for (int i = 1; i <=UserInputB; i++)
    {

        sqrt *= UserInputB;
    }
    cout<<sqrt;

    return 0;
}