#include<bits/stdc++.h>
using namespace std;
int main(){

   long long int n,n1,ans=0;
   cin>>n;
   for (int i = 0; i <n-1; i++)
   {
      cin>>n1;
      ans+=n1;
   }
   cout<<n*(n+1)/2-ans<<endl;
}