#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vectorarrays;
    int find;
    int index = -1;
    cout << "Enter the number of find indexing : ";
    cin >> find;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorarrays.push_back(element);
    }
    for (int i = 0; i <= vectorarrays.size() - 1; i++)
    {
        if (find == vectorarrays[(vectorarrays.size() - 1) - i])
        {
            index = (vectorarrays.size() - 1) - i;
            break;
        }
    }
    cout << index;

    return 0;
}