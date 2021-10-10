#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='0') cout<<5;
            else cout<<s[i];
        }
        cout<<endl;
    }
}
