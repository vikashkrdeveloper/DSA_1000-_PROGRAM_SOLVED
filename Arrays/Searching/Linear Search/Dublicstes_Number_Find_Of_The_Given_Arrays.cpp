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
    int length = sizeof(arr) / sizeof(arr[0]);
    long long dublicatesElement = -1;
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            if (arr[i] == arr[j])
                dublicatesElement = arr[i];
        }
    }
    cout << dublicatesElement << " ";
    return 0;
}