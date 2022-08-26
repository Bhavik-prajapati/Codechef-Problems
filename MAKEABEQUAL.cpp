#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      vector<int>v(1001,0);
      int k;
      for (int i = 0; i < n; i++)
      {
         cin>>k;
         v[k]++;
      }
      int m=*max_element(v.begin(),v.end());
      cout<<n-m<<endl;
   }
}