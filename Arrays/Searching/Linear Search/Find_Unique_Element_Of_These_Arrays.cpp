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
    int uniqueNumber = -1;
    for (int i = 0; i <= length; i++)
    {
        for (int j = 0; j <= length; j++)
        {
            if (arr[i] != arr[j])
            {
                uniqueNumber = arr[i];
            }
        }
    }
    cout << uniqueNumber;

    return 0;
}