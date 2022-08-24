#include<bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      int arr[n];
      set<int> s;
      for (int i = 0; i < n; i++)
      {
         cin>>arr[i];
         s.insert(arr[i]);
      }

      int counter=0;
      for(auto x:s){
         // cout<<x<<endl;
         counter++;
      }

      if(counter==1){
            cout<<"No"<<endl;
      }else{
         cout<<"Yes"<<endl;
      }
         


      


   }
   

}