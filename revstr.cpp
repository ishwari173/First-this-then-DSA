#include<iostream>
using namespace std;
bool revstr(string str){
    int left=0,right=str.length()-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
return true;
}
int main(){
    string str;
    cout<<"enter string:";
    cin>>str;
  

    if(revstr(str))cout<<"palindrome";
    else cout<<"not palindrome";
}