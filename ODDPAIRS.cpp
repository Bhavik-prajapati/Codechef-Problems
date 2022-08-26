#include<bits/stdc++.h>
using namespace std;
long long int ans(long long int n){
   if(n==1) return 0;
   if(n%2==1){
      return ((n/2)+1)*((n/2)*2);
   }else{
      return (n/2)*(n/2)*2;
   }
}
int main(){
   int t;
   cin>>t;
   while (t--)
   {
      long long int n;
      cin>>n;
      cout<<ans(n)<<endl;
   }
   

}