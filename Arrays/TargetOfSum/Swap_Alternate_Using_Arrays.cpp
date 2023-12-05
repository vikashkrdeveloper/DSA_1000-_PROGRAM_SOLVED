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
    for (int i = 0; i <= length - 1; i += 2)
    {
        if (i + 1 < length)
        {
            int temp = vectorElement[i];
            vectorElement[i] = vectorElement[i + 1];
            vectorElement[i + 1] = temp;
        }
    }
    for (int i = 0; i <= length - 1; i++)
    {
        cout << vectorElement[i] << endl;
    }

    return 0;
}