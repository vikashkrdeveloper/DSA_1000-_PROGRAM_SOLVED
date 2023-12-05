#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
    }
    int min = arr[0];

    for (int i = 0; i <= length - 1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
    return 0;
}