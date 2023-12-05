#include <iostream>
#include <vector>

using namespace std;
int ItFunctionFindLargestNumber(vector<int> &vectorElement, int size)
{
    int secondMax = vectorElement[0];
    int index = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        if (secondMax < vectorElement[i])
        {
            secondMax = vectorElement[i];
            index = i;
        }
    }
    return index;
}
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
    int size = vectorElement.size();
    int secondLarge=0;
    secondLarge = ItFunctionFindLargestNumber(vectorElement, size);
    int largestElement = vectorElement[secondLarge];
    for (int i = 0; i <= size - 1; i++)
    {
        if (largestElement == vectorElement[i])
        {
            vectorElement[i] = -1;
        }
    }

    secondLarge = ItFunctionFindLargestNumber(vectorElement, size);
    cout << vectorElement[secondLarge] << endl;

    return 0;
}
