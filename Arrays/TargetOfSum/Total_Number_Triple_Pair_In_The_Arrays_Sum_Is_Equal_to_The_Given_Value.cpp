#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorElement;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorElement.push_back(element);
    }
    int length = vectorElement.size();
    int pairs = 0;
    int TargetSum = 5;
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = i + 1; j <= length - 1; j++)
        {
            for (int k = j + 1; k <= length - 1; k++)
            {
                if ((vectorElement[i] + vectorElement[j] + vectorElement[k]) == TargetSum)
                {
                    pairs++;
                }
            }
        }
    }
    cout << pairs;

    return 0;
}