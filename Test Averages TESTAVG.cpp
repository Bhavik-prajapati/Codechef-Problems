#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while (t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int av1=(a+b)/2;
      int av2=(b+c)/2;
      int av3=(a+c)/2;

      if(av1>=35 && av2>=35 && av3>=35){
         cout<<"Pass"<<endl;
      }else{
         cout<<"Fail"<<endl;
      }



   }
   


}