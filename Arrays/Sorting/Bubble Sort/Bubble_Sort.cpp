#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int N)
{
    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = 0; j <N - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 33, 1, 45, 34, 98, 4, 0, 56};
    int length = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, length);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}