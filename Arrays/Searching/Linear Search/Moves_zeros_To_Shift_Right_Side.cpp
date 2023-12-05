#include<bits/stdc++.h> 
using namespace std;

int MoveZeros(int arr[],int N){
    int j=0;
    for (int i = 0; i <=N-1; i++)
    {
        if(arr[i]!=0){ 
                swap(arr[i],arr[j++]);
        }
         
    }
    
}

int  main(){
int arr[]={34,56,78,3,0,98,0,67,};
int length=sizeof(arr)/sizeof(arr[0]);
MoveZeros(arr,length);
    for (int i = 0; i <=length-1; i++)
    {
       cout<<arr[i]<<" ";
    }
return 0;
}