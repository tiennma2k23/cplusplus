#include<bits/stdc++.h>
using namespace std;
long long n,i,t[100000],ans=0,k,q;
char a[100000];
map<long long,long long>d;
int main()
{
    cin>>q;
    while (q--){
    cin>>n;
    ans=0;k=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        t[i]=t[i-1]+(a[i]-'0')-1;
        d[t[i]]++;
    }
    ans+=(d[0]*(d[0]+1))/2;
    for (i=1;i<=n;i++)
    {
        if (t[i]!=0&&d[t[i]]!=0)
        {
            ans+=(d[t[i]]*(d[t[i]]-1))/2;
            d[t[i]]=0;
            t[i]=0;
        }
    }
    d[0]=0;
    cout<<ans<<endl;
    }
}
