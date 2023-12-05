#include <iostream>
using namespace std;
long long int squarerootinteger(int num)
{
    int start = 0;
    int end = num;
    long long int middle = start + (end - start) / 2;
    long long int result = 0;
    while (start <= end)
    {
        if ((middle * middle) == num)
            return middle;
        else if ((middle * middle) < num)
        {
            result = middle;
            start = middle + 1;
        }
        else
            end = middle - 1;
        middle = start + (end - start) / 2;
    }
    return result;
}
double squarerootfun(int num, int precession, int solutiontemp)
{
    double factor=1;
    double answer=solutiontemp;
    for (int i = 0; i < precession; i++)
    {
       factor=factor/10;
       for (double j = answer; j*j <num; j=j+factor)
       {
        answer=j;
       }
       
    }
    return answer;
    
}
int main()
{
    int num = 7;
    int squareroot = squarerootinteger(num);
    cout << squarerootfun(num, 3, squareroot);
    return 0;
}