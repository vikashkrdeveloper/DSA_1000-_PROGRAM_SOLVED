#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[], int N)
{
    for (int i = 0; i <=N-1; i++)
    {
        int min=i;
        for(int j=i+1; j<=N-1; j++){
            if(arr[min]>arr[j]) min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp; 
    }
}
int main()
{
    int arr[] = {34, 67, 8, 40, 0, 89, 2, 78};
    int length = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, length);
    for(int i=0; i<=length-1; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}