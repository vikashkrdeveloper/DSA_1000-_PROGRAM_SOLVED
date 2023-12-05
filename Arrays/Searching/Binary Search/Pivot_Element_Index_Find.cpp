#include<iostream>
int PivotElementIndex(int arr[],int N){
    int start=0;
    int end=N;
    int middle=start+(end-start)/2;
    while (start<end)
    {
        if(arr[middle]>arr[0]){
            start=middle+1;
        }else{
            end=middle;
        }
        middle=start+(end-start)/2;
    }
    return start;
    
}
using namespace std;
int main(){
int arr[]={6,7,8,9,1,2,3,4,5};
int length=sizeof(arr)/sizeof(arr[0])/2;
int pivotElement=PivotElementIndex(arr,length);
cout<<"Pivot Element Find In Arrays : "<<pivotElement;
    return 0;
}