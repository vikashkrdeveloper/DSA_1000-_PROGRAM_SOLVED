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
    bool check = true;
    for (int i = 0; i <= vectorElement.size() - 1; i++)
    {
        if (vectorElement[i] >= vectorElement[i + 1])
        {
            check = false;
        }
    }
    if (check)
    {
        cout << "Array Are sorted";
    }
    else
    {
        cout << "Array Are Not sorted";
    }

    return 0;
}