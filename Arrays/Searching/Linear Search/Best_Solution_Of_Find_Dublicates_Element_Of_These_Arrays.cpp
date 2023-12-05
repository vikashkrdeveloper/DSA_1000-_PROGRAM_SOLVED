#include <iostream>
using namespace std;

int main()
{
    long long dublicates = 0;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Number : ";
        cin >> arr[i];
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        dublicates = dublicates ^ arr[i];
    }
    for (int i = 0; i <= length - 1; i++)
    {
        dublicates = dublicates ^ i;
    }
    cout << dublicates << " ";
    return 0;
}