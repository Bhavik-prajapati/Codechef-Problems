#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while (t--)
   {
      int n,k;
      cin>>k>>n;
      long long sum=(n*(n+1))/2;
      if(sum<=k){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
     

   }
   


}