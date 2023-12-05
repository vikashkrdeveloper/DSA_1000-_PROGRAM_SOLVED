#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= length - 1; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}