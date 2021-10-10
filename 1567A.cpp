#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int q;
    cin>>q;
    while (q--)
    {
    int n;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='U') cout<<'D';
        else if (s[i]=='D') cout<<'U';
        else cout<<s[i];
    }
    cout<<endl;
    }
}
