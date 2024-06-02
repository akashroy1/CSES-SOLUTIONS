// Missing Number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll n;   
    cin>>n;
    ll temp, sum=0;
    for(int i=0; i<n-1; i++){
        cin>>temp;
        sum+=temp;
    }
    ll rsum = n*(n+1)/2;
    cout<<rsum-sum;
    return 0;
}