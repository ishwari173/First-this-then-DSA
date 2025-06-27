#include<iostream>
#include<vector>
using namespace std;
/* void revarr(vector<int>&arr){
int left=0,right=arr.size()-1;
while(left<right){
     swap(arr[left],arr[right]);
     left++;
     right--;

} 
  

}*/

void revarr(vector<int>&arr){
    int left=0,right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;

    }
}


int main(){

int n;
cout<<"enter the length:";
cin>>n;
vector<int>arr(n);


cout<<"enter the elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 revarr(arr);
cout<<"rev arr:";
for(int num:arr){
    cout<<num<<" ";
}


}