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
      bool a=true;
       set<int> s;
      for (int i = 0; i < n; i++)
      {
         cin>>arr[i];
         int x=arr[i];
          s.insert(x);
      }
     
      if (s.size() & 1) {if (!(n - s.size())) {a = false;}}
    cout << (a ? "YES" : "NO") << "\n";
      

      
   }
   
   

}