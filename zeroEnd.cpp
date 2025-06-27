#include<iostream>
using namespace std;
int zeroNum(int arr[],int n)
  {
     int index=0;
     for(int i=0;i<n;i++){
    if(arr[i]!=0){
        arr[index++]=arr[i];

    }
     }
     while(index<n){
        arr[index++]=0;
     }
  }
int main(){
 int n;
 cout<<"length:";
 cin>>n;

 int arr[n];
 cout<<"enter the elements of array:";
 for(int i=0;i<n;i++){
    cin>>arr[i];
}
zeroNum(arr,n);
cout<<"array after removing zeros:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}}