#include<iostream> 
#include<vector> 
using namespace std;
int FindFirstOccurance(int arr[],int N,int key){
    int start=0;
    int end=N;
    int middle=(start+end)/2;
    int occurance=-1;
    while (start<=end)
    {
         if(key==arr[middle]){
                occurance=middle;
                end=middle-1;
            }
           else if(arr[middle]<key){
                start=middle+1;
            }
           else if(arr[middle]>key){
                end=middle-1;
            }
        middle=(start+end)/2;

    }
    
    return occurance;

}
int FindLastOccurance(int arr[],int N,int key){
    int start=0;
    int end=N;
    int middle=(start+end)/2;
    int occurance=-1;
    while (start<=end)
    {
         if(key==arr[middle]){
                occurance=middle;
                start=middle+1;
            }
           else if(arr[middle]<key){
                start=middle+1;
            }
           else if(arr[middle]>key){
                end=middle-1;
            }
        middle=(start+end)/2;

    }
    return occurance;
    

}
int  main(){
int arr[]={5,5,6,7,8,9,};
int compareNumber=5;
int length=sizeof(arr)/sizeof(arr[0]);
int  binarysearchfirst=FindFirstOccurance(arr,length,compareNumber);
int  binarysearchlast=FindLastOccurance(arr,length,compareNumber);
cout<<binarysearchfirst<<" ";
cout<<binarysearchlast<<" ";
return 0;
}