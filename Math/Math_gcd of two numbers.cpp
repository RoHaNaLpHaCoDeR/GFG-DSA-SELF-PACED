#include<bits/stdc++.h>
using namespace std;

int gcd1(long a, long b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return b;
}
int gcd2(long a, long b){
    if(b==0){return a;}
    return gcd2(b,a%b);
}
int main(){
    long a,b;
    cin>>a>>b;
    // method 1
    // long res1 = gcd1(a,b);
    // cout<<res1<<endl;
    // method 2
    long res2 = gcd2(a,b);
    cout<<res2<<endl;
    return 0;
}