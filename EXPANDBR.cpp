#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main()
{
    string s;
    long long ans,l,d,i,tmp;
    freopen("expandbr.inp","r",stdin);
    freopen("expandbr.out","w",stdout);
    cin>>s;
    long long n=s.size();
    ans=((n+1)*(n+2))/2;
    l=0;d=0;
    for (i=0;i<s.length();i++)
    {
        if (s[i]=='(') d++;
        else d--;
        if (d==0)
        {
            ans+=(i+1-l)*(i-l)/2;
            l=i+1;
        }
    }
    cout<<ans<<endl;
}
