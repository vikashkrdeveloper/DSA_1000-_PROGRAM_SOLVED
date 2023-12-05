#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int linearsearch;
    int element = -1;
    cout << "Enter the number Linear search of these arrays : ";
    cin >> linearsearch;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter the number : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= length - 1; i++)
    {
        if (linearsearch == arr[i])
        {
            element = i;
            break;
        }
         
    }

    cout << element;
    return 0;
}