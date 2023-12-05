#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorarrays;
    int find = 3;
    int index = -1;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorarrays.push_back(element);
    }
    for (int i = 0; i <= vectorarrays.size() - 1; i++)
    {
        if (find == vectorarrays[i])
        {
            index = i;
        }
    }
    cout << index;

    return 0;
}