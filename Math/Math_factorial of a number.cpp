#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){return 1;}
    return n*factorial(n-1);   
}
int main(){
    long long n;
    cin>>n;
    // method 1
    // iterative
    long long pro=1;
    for(int i =1;i<=n;i++){
        pro*=i;
    }
    cout<<pro<<endl;
    
    // method 2
    // recursive
    long long res = factorial(n);
    cout<<res<<endl;
}