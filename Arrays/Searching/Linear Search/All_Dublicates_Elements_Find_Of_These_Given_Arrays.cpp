#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
    }
    int dublicatesElement[2];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            if (arr[i] == arr[j])
                dublicatesElement[i] = arr[i];
        }
    }
    int length2 = sizeof(dublicatesElement) / sizeof(dublicatesElement[0]);
    for (int i = 0; i <= length2 - 1; i++)
    {
        cout << dublicatesElement[i] << " ";
    }

    return 0;
}