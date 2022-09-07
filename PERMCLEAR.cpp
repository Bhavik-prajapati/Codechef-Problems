

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>v1(n) ;
       for(int i=0;i<n;i++){
           cin>>v1[i];
       }
       int x;
       cin>>x;
       set<int>s1;
       for(int i=0;i<x;i++){
           int m;
           cin>>m;
           s1.insert(m);
       }
       for(int i=0;i<n;i++){
           if(s1.count(v1[i])){
               continue;
           }
           else{
               cout<<v1[i]<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}