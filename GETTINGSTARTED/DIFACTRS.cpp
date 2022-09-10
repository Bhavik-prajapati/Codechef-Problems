#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   unordered_set<int> s;
   for (int i = 1; i <=n; i++)
   {
      if(n%i==0){
         s.insert(i);
      }
   }
   vector<int> v(s.begin(), s.end());
  sort(v.begin(),v.end());
   vector<int>::iterator it;
    cout<<v.size()<<endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }

}