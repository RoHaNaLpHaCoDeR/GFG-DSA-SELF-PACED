#include<bits/stdc++.h>
using namespace std;

// Method 2

// int countdigits(long n){
//     if(n==0){return 0;}
//     return 1+countdigits(n/10);
// }

int main(){
    long n;
    cin>>n;
    
    // Method 1 

    // int count = 0;
    // while(n!=0){
    //     n=n/10;
    //     count++;
    // }
    // cout<<count<<endl;
    
    // Method 2
    // long digits = countdigits(n); 
    // cout<<digits<<endl;
    
    // Method 3
    long digits = floor(log10(n)+1);
    cout<<digits<<endl;

}