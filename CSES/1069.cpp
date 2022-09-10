#include<bits/stdc++.h>
using namespace std;
int main(){  
  string s;
  cin>>s;
  int a=0,c=0,g=0,t=0;
  for (int i = 0; i < s.size(); ++i){
    if(s[i]=='A')
    {
      a++;
    }
    else if(s[i]=='C'){
      c++;
    
    }
    else if(s[i]=='G')
    {
      g++;
    
    }else if(s[i]=='T'){
      t++;
    }
  
  }

  int left_max = max(a,c);
    int right_max = max(g,t);
    int final_max = max(left_max, right_max);
    cout<<final_max<<endl;
    
}