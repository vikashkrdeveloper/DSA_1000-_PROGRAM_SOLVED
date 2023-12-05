#include <iostream>
#include <vector>
using namespace std;
vector<int> vectorArrays;
int main()
{
    int TargetOfNumber;
    int pairs = 0;
    cout << "Enter the number Of Target Sum : ";
    cin >> TargetOfNumber;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cout << "Enter the number Of element : ";
        cin >> element;
        vectorArrays.push_back(element);
    }
    int length = vectorArrays.size();
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            if ((vectorArrays[i] + vectorArrays[j]) == TargetOfNumber)
            {
                pairs++;
            }
        }
    }
    cout << pairs << " ";
    return 0;
}