#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s1;
        for(int i=0;i<n;i++){
            cin>>s1[i];
        }
        int a1 = pow(2,( n+1-k))+1;
        int b1 = pow(2,( n+1-k));
        if(n%2 != 0){
            cout<<a1<<endl;
        }
        else if(n == k){
            cout<<n<<endl;
        }
        else{
            cout<<b1<<endl;
        }
    }
    return 0;
}