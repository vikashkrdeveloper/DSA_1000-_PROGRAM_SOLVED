#include <iostream>
using namespace std;
int peakIndexInAMountainArray(int arr[], int N)
{
    int start = 0;
    int end = N;
    int middle = (start + end) / 2;
    int peakindex = -1;
    while (start <= end)
    {
        if (arr[middle] < arr[middle + 1])
        {
            start = middle + 1;
        }
        else
        {
            end = middle;
        }
        middle = (start + end) / 2;
    }
    return peakindex;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int peakindex = peakIndexInAMountainArray(arr, length);
    cout << "Peak Index in a Mountain Array : " << peakindex;
    return 0;
}