#include<iostream> 
#include<vector> 
using namespace std;
bool isPosible(int arr[],int N,int X,int mid ){
   int student =1;
   int countpage=0;
   for(int i=0; i<=N-1; i++){
      if((countpage+arr[i])<=mid){
         countpage+=arr[i];
      }else{
         student++;
         if(student>X||arr[i]>mid){
            return false;
         }
         countpage=arr[i];
      }
   }
   return true;

}
int Bookallocation(int arr[],int N,int numberofstudent){
   int start=0;
   int sum=0;
   for(int i=0; i<=N-1; i++){
      sum+=arr[i];
   }
   int end=sum;
   int answer=-1;
   while (start<=end)
   {
      int middle=start+(end-start)/2;
      if(isPosible(arr,N,numberofstudent,middle)){
         answer=middle;
         end=middle-1;
      }else start=middle+1;
   }
   return answer;
}

int  main(){
int arr[]={10,20,30,40};
int numberofstudent=2;
int length=sizeof(arr)/sizeof(arr[0]);
int BookallocationProblem=Bookallocation(arr,length,numberofstudent);
cout<<BookallocationProblem;
return 0;
}