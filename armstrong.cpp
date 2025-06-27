#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n){
    int c=0;
    int temp=n;

    while(temp!=0){
        c++;
        temp/=10;
    }

    temp=n;
    int sum=0;
    while(temp!=0){
        int digit=temp%10;
        sum += round(pow(digit,c));  
        temp/=10;
    }
    if(sum==n)cout<<"armstrong";
    else cout<<"not armstrong";
    return 0;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    armstrong(num);
}