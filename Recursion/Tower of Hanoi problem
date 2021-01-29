// Time complexity = O(2^n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,vector<int>& from,vector<int>& use,vector<int>& to){
    int x;
    if(n>0){
        hanoi(n-1,from,to,use);
        x = from[from.size()-1];
        from.pop_back();
        to.push_back(x);
        hanoi(n-1,use,from,to);
    }
}

int main(){
    vector<int> A,B,C,out;
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=n;i>0;i--){
        A.push_back(i);
    }
    cout<<"A before : "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    cout<<"C before is empty? : "<<C.empty()<<endl;
    
    hanoi(n,A,B,C);
    
    cout<<"C after : "<<endl;
    for(int i=0;i<C.size();i++){
        cout<<C[i]<<endl;
    }
    cout<<"A after is empty? : "<<A.empty();
}
