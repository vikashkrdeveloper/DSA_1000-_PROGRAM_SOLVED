#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i <= length - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}