#include<bits/stdc++.h>
using namespace std;

int lcm(long a, long b){
    return a*b/gcd(a,b);
}
int gcd(long a, long b){
    if(b==0){return a;}
    return gcd(b,a%b);
}
int main(){
    long a,b;
    cin>>a>>b;
    // method 1
    // long res1 = gcd1(a,b);
    // cout<<res1<<endl;
    // method 2
    long res2 = lcm(a,b);
    cout<<res2<<endl;
    return 0;
}