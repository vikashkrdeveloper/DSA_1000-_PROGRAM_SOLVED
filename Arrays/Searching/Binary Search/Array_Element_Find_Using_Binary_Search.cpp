#include<iostream> 
using namespace std;
int BinarySearchFunction(int Arrays[],int N,int Compare){
int start=0;
int end=N;
int middle=(start+end)/2;
while (start<=end)
{
    if(Compare==Arrays[middle])return middle;
    if(Compare>Arrays[middle]) start=middle+1;
    else end=middle-1; 
    middle=(start+end)/2;
}
return -1;


}

int  main(){
int arr[5];
int compareNumber;
for (int i = 0; i <5; i++)
{
   cout<<"Enter the element monotonic function ";
   cin>>arr[i];
}
cout<<"Enter the number  of the compare : ";
cin>>compareNumber;
int length=sizeof(arr)/sizeof(arr[0]);
int  binarysearch=BinarySearchFunction(arr,length,compareNumber);
cout<<binarysearch;
return 0;
}