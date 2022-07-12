#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;

    // method 1 ( O(n) )
    long long pro=1;
    for(int i =1;i<=n;i++){
        pro*=i;
    }
    cout<<pro<<endl;
    int res=0;
    while(pro%10==0){
        res++;
        pro/=10;
    }
    cout<<res<<endl;
    
    // method 2 ( o(logn) )
    int res2=0;
    for(int j=5;j<=n;j=j*5){
        res2 = res2+(n/j);
    }
    cout<<res2<<endl;
    return 0;
}