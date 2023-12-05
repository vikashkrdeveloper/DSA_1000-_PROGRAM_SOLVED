#include <bits/stdc++.h>
using namespace std;

void ReverseString(string str, int N)
{
    int a=0;
    for (int i = 0; i <= N - 1; i++)
    {
        if(str[i]==0e9||str[i]==0e9){
            str[a]=str[i];
        }
        a++;
    }
}
int main()
{
    string arr="Vikash 1234$ % ";
    int length =arr.size();
    ReverseString(arr, length);
    for (int i = 0; i <= length - 1; i++)
        cout << arr[i] << endl;
    return 0;
}