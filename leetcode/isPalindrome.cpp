
#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
bool ispalindromeornot(int l , int r , string &s){

   if(l>=r){
      return true;
   }
   if(s[l]!=s[r]){
      return false;
   }
   return ispalindromeornot(l+1,r-1,s);

}
public:
    bool isPalindrome(string s) {
     
     string str="";
     for (char ch:s)
     {
      if(isalnum(ch)==false){
         continue;
      }
      if(ch== ' '){
         continue;
      }

      if(isupper(ch)){
         ch=ch+32;
      }
      str.push_back(ch);
     }
     if(str.size()==0){
      return true;
     }

      bool res=ispalindromeornot(0,
      str.size()-1,str);

      return res;
    }
};
int main(){

   Solution s1;
   cout<<s1.isPalindrome("bhavik");

}