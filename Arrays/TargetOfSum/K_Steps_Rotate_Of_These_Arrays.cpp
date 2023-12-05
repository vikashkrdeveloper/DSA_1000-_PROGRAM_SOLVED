#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vectorElement;
    int kNumber;
    cout<<"Enter the number  of k : ";
    cin>>kNumber;
    for (int i = 0; i <= 5; i++)
    {
        int element;
        cout << "Enter the number : ";
        cin >> element;
        vectorElement.push_back(element);
    }
    int length = vectorElement.size();
   for (int i = 0; i <=length-1; i++)
   {
vectorElement[i]=vectorElement[length-1]    
   }
   

    return 0;
}