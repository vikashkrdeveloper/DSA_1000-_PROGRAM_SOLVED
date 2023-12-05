#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorArrays(8);
    int length = vectorArrays.size();
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter the number : ";
        cin >> vectorArrays[i];
    }
    for (int i = 0; i <= length - 1; i++)
    {
        cout << vectorArrays[i] << endl;
    }

    return 0;
}