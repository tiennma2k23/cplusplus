#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("password.inp","r",stdin);
    freopen("password.out","w",stdout);
    string s;
    long long k,t=0,i;
    cin>>s>>k;
    for (i=0;i<s.length();i++)
        t=t+(k+(s[i]-'a'))%26;
    cout<<t<<endl;
}
