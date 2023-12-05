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
  int Uniquepairs = 0;
  for (int i = 0; i <= length - 1; i++)
  {
    for (int j = i + 1; j <= length - 1; j++)
    {
      if (vectorElement[i] == vectorElement[j])
      {
        vectorElement[i] = vectorElement[j] = -1;
      }
    }
  }
  for (int i = 0; i <= length - 1; i++)
  {
    if (vectorElement[i] >= 0)
    {
      cout << vectorElement[i] << endl;
    }
  }

  return 0;
}