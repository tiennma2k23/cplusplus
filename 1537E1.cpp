
#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
string s;

bool ok(int x, int y)
{
    for (int i=0; i<=k; i++)
    {
        int p=s[i%x],q=s[i%y];
        if (p<q) return true;
        if (p>q) return false;
    }
    return true;
}

int32_t main()
{
    cin>>n>>k>>s;
    int vt=n;
    for (int i=n-1; i>=1; i--) if (ok(i,vt)) vt=i;
    for (int i=0; i<=k-1; i++) cout<<s[i%vt];
}
