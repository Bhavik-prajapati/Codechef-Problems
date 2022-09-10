#include <iostream>
using namespace std;

int main() {
    int s,e,w;
    cin>>s>>e>>w;
   
    
    
    for(int i=s;i<=e;i=i+w){
        
        cout<<i<<"\t"<<(i-32)*5/9<<endl;
        
    }

    return 0;
}