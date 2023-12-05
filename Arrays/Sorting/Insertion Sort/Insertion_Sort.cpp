#include <bits/stdc++.h>
using namespace std;
int InsertionSort(int arr[], int n)
{
    for (int i = 1; i <n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for ( ; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
         arr[j+1] = arr[j];
    }
}
int main()
{
    int arr[] = {3, 599, 4, 3, 7, 9, 2, 4, 56};
    int length = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, length);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}