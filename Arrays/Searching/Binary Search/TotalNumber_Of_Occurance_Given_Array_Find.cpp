#include <iostream>
using namespace std;
int FindFirstOccurance(int arr[], int N, int key)
{
    int start = 0;
    int end = N;
    int middle = (start + end) / 2;
    int occurance = -1;
    while (start <= end)
    {
        if (key == arr[middle])
        {
            occurance = middle;
            end = middle - 1;
        }
        else if (key > arr[middle])
        {
            start = middle + 1;
        }
        else if (key < arr[middle])
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    return occurance;
}
int FindLastOccurance(int arr[], int N, int key)
{
    int start = 0;
    int end = N;
    int middle = (start + end) / 2;
    int occurance = -1;
    while (start <= end)
    {
        if (key == arr[middle])
        {
            occurance = middle;
            start = middle + 1;
        }
        else if (key > arr[middle])
        {
            start = middle + 1;
        }
        else if (key < arr[middle])
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    return occurance;
}
int main()
{
    int arr[] = {2, 3, 4, 4, 4, 4, 4, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int occurance = 6;
    int firstOccurance = FindFirstOccurance(arr, length, occurance);
    int lastOccurance = FindLastOccurance(arr, length, occurance);
    int totalNoOfOccurance=(lastOccurance-firstOccurance)+1;
    cout<<"Total no of occurance is equal to "<<totalNoOfOccurance<<" ";
    return 0;
}