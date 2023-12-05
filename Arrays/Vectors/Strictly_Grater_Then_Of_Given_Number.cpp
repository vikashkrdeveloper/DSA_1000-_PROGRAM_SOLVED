#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorElement;
    int findNumberElement;
    cout << "Enter the number Find Elements : ";
    cin >> findNumberElement;
    int countStrictlyGreater = 0;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorElement.push_back(element);
    }
    for (int i = 0; i <= vectorElement.size() - 1; i++)
    {
        if (findNumberElement < vectorElement[i])
        {
            countStrictlyGreater++;
        }
    }
    cout << countStrictlyGreater;
    return 0;
}