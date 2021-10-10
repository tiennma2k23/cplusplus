#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5,MOD=1e9+7;
long long dp[MAXN];
int main()
{
    long long i;
    string s1,t;
    freopen("weather.inp","r",stdin);
    freopen("weather.out","w",stdout);
    cin>>t;
    for (i=0;i<=MAXN;i++) dp[i]=1;
    t=' '+t;
    for (i=2;i<t.length();i++)
    {
        s1=t.substr(i-1,2);
        if (s1=="EN"||s1=="SE"||s1=="WS"||s1=="NW") dp[i]=(dp[i-1]+dp[i-2])%MOD;
        else dp[i]=(dp[i-1])%MOD;
    }
    cout<<dp[t.length()-1]<<endl;
}
