#include<bits/stdc++.h>
using namespace std;
const long long MAXN=3e5;
long long t[2*MAXN],d[MAXN];
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    long long i,k,ans;
    cin>>s;
    for (i=0;i<=MAXN;i++) d[i]=1;
    s=' '+s;
    t[1]=0;
    for (i=2;i<s.length();i++)
    {
        k=t[i-1];
        while (k>0&&s[i]!=s[k+1]) k=t[k];
        if (s[i]==s[k+1]) k++;
        t[i]=k;
        ans=k;
        while (ans>0){
        d[ans]++;
        ans=t[ans];
        }
    }
    for (i=1;i<s.length();i++) cout<<d[i]<<" ";
}
