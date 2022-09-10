#include <bits/stdc++.h>
using namespace std;

bool checkcon(vector<int> a,vector<int> b)
{
    set<int> st;
    for(int i = 0;i<a.size();i++)
    {
        st.insert(a[i]);
    }
    for(int i = 0;i<b.size();i++)
    {
        st.insert(b[i]);
    }
    return {st.size()==5};

}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr1;
        for(int i = 0;i<n;i++)
        {
            vector<int> v1;
            int k;
            cin>>k;
            for(int j = 0;j<k;j++)
            {
                int l;
                cin>>l;
                v1.push_back(l);
            }
            arr1.push_back(v1);
        }

        bool test2 = false;
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                bool call1 = checkcon(arr1[i],arr1[j]);
                if(call1)
                {
                    test2 = true;
                    break;
                }
            }
            if(test2)
            {
                break;
            }
        }

        if(test2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }


    }


    return 0;
}