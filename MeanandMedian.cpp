#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t,x,y;
   while (t--)
   {
      cin>>x>>y;
      long long int ans1=3*x-2*y;
      cout<<ans1;
      cout<<min(ans1,y)<<" "<<y<<" "<<max(ans1,y)<<endl;
   }
}