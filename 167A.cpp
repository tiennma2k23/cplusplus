#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i;
    bool kt;
    string s,t;
    cin>>s>>t;
    kt=true;
    for (i=0;i<s.length();i++)
    {
        if (s[i]!=t[i])
        {
            kt=false;
            break;
        }
    }
    if (kt&&t.length()-s.length()==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
