#include<iostream>
using namespace std;
int GCD(int a, int b){
   int gcd=1;
   for(int i=1;i<=min(a,b);i++){
    if(a%i==0&&b%i==0){
        gcd=i;
    }
   }
   return gcd;
}
int main(){
    int a,b;
   
    cout<<"enter numbers";
    cin>>a>>b;
    int finalgc=GCD(a, b);
    cout<<finalgc;

}