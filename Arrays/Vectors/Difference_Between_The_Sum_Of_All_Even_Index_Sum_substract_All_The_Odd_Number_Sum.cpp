#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorarrays;
    int SumOfEvennumber = 0;
    int SumOfOddnumber = 0;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorarrays.push_back(element);
    }
    for (int i = 0; i <= vectorarrays.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            SumOfEvennumber += vectorarrays[i];
        }
        else
        {
            SumOfOddnumber += vectorarrays[i];
        }
    }
    cout << SumOfEvennumber - SumOfOddnumber;
    return 0;
}