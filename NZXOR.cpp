#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

       int n;
      cin>>n;
      int temp=n;
       set<int> s1;
       vector<int> vec(n);
       for (int i = 0; i < n; i++)
       {
         cin>>vec[i];
       }

       sort( vec.begin(), vec.end() );
      vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
      
        for(int i=0;i<vec.size();i++){
           cout<<vec[i]<<" ";
       }cout<<endl;
      //  cout<<s1.size()<<endl;
    }
}