#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double fib(vector<int> v, int n){
    if(n>=2){
        if(v[n-1]==-1)
            v[n-1] = fib(v,n-1);
        if(v[n-2]==-1)
            v[n-2] = fib(v,n-2);
        return v[n-1] + v[n-2];
    }
    else
        return n;
}

int main(){
    int n=10;
    
    // vector to store fibonacci series values to avoid repeated calculations...
    vector<int> v(n,-1); 
    
    cout<<fib(v,n);
}
