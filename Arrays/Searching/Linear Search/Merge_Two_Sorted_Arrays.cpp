#include <bits/stdc++.h>
using namespace std;
void mergetwoSortedArrays(int arr1[], int arr2[], int n, int m)
{
    int arr3[n + m];
    for (int i = 0; i <= n - 1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i <= m - 1; i++)
    {
        arr3[n + i] = arr2[i];
    }
    int mergearrayslength = sizeof(arr3) / sizeof(arr3[0]);
    for (int i = 0; i <= mergearrayslength - 1; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[] = {2, 3, 5, 6, 7, 8};
    int arr2[] = {9, 12, 13, 24, 26};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    mergetwoSortedArrays(arr1, arr2, n, m);
    return 0;
}