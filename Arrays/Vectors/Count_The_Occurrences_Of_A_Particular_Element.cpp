#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorArrays;
    int findElement;
    int count = 0;
    cout << "Enter the number : ";
    cin >> findElement;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the element Of the vector  : ";
        cin >> element;
        vectorArrays.push_back(element);
    }
    for (int i = 0; i <= vectorArrays.size() - 1; i++)
    {
        if (findElement == vectorArrays[i])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}