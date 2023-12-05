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
    int max = vectorElement[0];
    int secondMax = vectorElement[0];
    for (int i = 0; i <= length-1; i++)
    {
        if (vectorElement[i] > max)
        {
            max = vectorElement[i];
        }
    }
    for (int i = 0; i <= length-1; i++)
    {
        if (vectorElement[i] > secondMax && vectorElement[i] != max)
        {
            secondMax = vectorElement[i];
        }
    }

    cout << secondMax;

    return 0;
}