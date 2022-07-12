#include<bits/stdc++.h>
using namespace std;


int main(){
    long n;
    cin>>n;
    long temp=n;
    bool flag=true;
    int rem=0;
    int rev=0;
    while(n!=0){
        rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(rev==temp){cout<<boolalpha<<flag<<endl;}
    else{cout<<boolalpha<<!flag<<endl;}
}