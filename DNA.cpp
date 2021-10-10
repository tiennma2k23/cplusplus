#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    string s;
    cin>>s;
    for (int i=s.length()-1;i>=0;i--)
    {
        if (s[i]=='T') cout<<'A';
        else if (s[i]=='A') cout<<'T';
        else if (s[i]=='G') cout<<'C';
        else cout<<'G';
    }
}
