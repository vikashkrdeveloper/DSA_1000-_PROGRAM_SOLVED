#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int N,int X,int mid){
    int cowscount=1;
    int agressivecows=0;
    for(int i=0; i<=N-1; i++){
        if((arr[i]-agressivecows)>=mid){
        
            cowscount++;
            if(cowscount==X){
                return true;
            }
            agressivecows=arr[i];
        }
    }
    return false;

}

int Aggressivecowsfunction(int arr[],int N,int X){
    sort(arr,arr+N);
    int start=0; 
    int end=N-1;
    int answer=-1;
    while(start<=end){
        int middle=start+(end-start)/2;
        if(isPossible(arr,N,X,middle)){
            answer=middle;
            start=middle+1;
        }else end=middle-1;
    }   
    return answer; 

}

int main()
{
    int arr[] = {4, 2 ,1, 3, 6};
    int aggressivecows = 2;
    int length = sizeof(arr) / sizeof(arr[0]);
    int Aggressivecows=Aggressivecowsfunction(arr,length,aggressivecows);
    cout<<Aggressivecows;
    return 0;
}