#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7;
int a[N+1],f[N+1];

void create()
{
    for (int i=1;i<=N;i++)
    {
        for (int j=i;j<=N;j+=i) a[j]+=i;
        if (a[i]<=N&&!f[a[i]]) f[a[i]]=i;
    }
}

int32_t main()
{
    create();
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        if (!f[n]) cout<<-1<<endl;
        else cout<<f[n]<<endl;
    }
}
