#include <iostream>
#include <vector>
using namespace std;
int vectorElementFunction(vector<int> vectorshomes)
{
    int length = vectorshomes.size();
    for (int i = 0; i <= 5; i++)
    {
        int elements;
        cout << "Enter the number Of Vector After Element : ";
        cin >> vectorshomes[i];
    }
    for (int i = 0; i <= length - 1; i++)
    {
        cout << vectorshomes[i] << " ";
    }

    return 0;
}
int main()
{
    int num = 0;
    vector<int> vectorArrays;

    for (int i = 0; i <= 5; i++)
    {
        int elements;
        cout << "Enter the number Of Vector Before Element : ";
        cin >> elements;
        vectorArrays.push_back(elements);
    }
    int length = vectorArrays.size();
    for (int i = 0; i <= length - 1; i++)
    {
        cout << vectorArrays[i] << endl;
    }
    vectorElementFunction(vectorArrays);
    for (int i = 0; i <= length - 1; i++)
    {
        cout << vectorArrays[i] << endl;
    }

    return 0;
}