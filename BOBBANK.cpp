#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main(){

   LL t;
   cin>>t;
   while (t--)
   {
      LL w,x,y,z;
      cin>>w>>x>>y>>z;
      //! w-> current amount
      //! x-> deposit amount per month
      //! y->deducted amount per month
      // !z->no of months
      cout<<w-abs(x-y)*z<<endl;

   }

}