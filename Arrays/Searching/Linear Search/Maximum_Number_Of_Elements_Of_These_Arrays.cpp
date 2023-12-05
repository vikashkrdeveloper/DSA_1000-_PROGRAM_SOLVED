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
    int max = arr[0];

    for (int i = 0; i <= length - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}