#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int count=0,i=0;
      while (i<n)
      {
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
         {
           count=0;       
         }else{
            count++;
         }

         if(count==4)
         {
            break;
         }
         i++;
      }
      if(count==4){
         cout<<"NO"<<endl;
      }else{
         cout<<"YES"<<endl;
      }
   }
}