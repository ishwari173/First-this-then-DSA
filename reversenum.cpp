#include<iostream>
using namespace std;

int revnum(int num){
    int rev=0;

    while(num!=0){
       int digit=num%10;
     rev=rev*10+digit;
       num=num/10;

    }
    return rev;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
   int hya= revnum(num);
   cout<<hya;
    
}