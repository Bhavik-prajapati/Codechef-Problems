#include<bits/stdc++.h>
using namespace std;
// void display(set<int> s)
// {
//   set<int>::iterator itr;
   
//   // Displaying set elements
//   for (itr = s.begin();
//        itr != s.end(); itr++)
//   {
//     cout << *itr << " ";
//   }
// } 
int main(){

   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      int arr[n];
      // set<int> s;
      for (int i = 0; i < n; i++)
      {
         cin>>arr[i];
         int x=arr[i];
         // s.insert(x);
      }
      
      if(n%2==0){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }

      // display(s);
      // cout<<s.size()<<endl;
      // if(s.size()%2==0){
      //    cout<<"YES"<<endl;
      // }else{
      // cout<<"NO"<<endl;
      // }
      

            




         



      
   }
   
   

}