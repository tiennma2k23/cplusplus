#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e6+10;
long long a[MAXN];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n,s,i,j,dem=0;
    freopen("SKYTRAM.INP ","r",stdin);
    freopen("SKYTRAM.OUT ","w",stdout);
    cin>>n>>s;
    for (i=1;i<=n;i++) cin>>a[i];
    sort (a+1,a+1+n);
    i=1;j=n;
    while (i<j)
    {
        if (a[i]+a[j]<=s)
        {
            dem++;
            i++;j--;
        }
        else dem++,j--;
    }
    if (i==j) dem++;
    cout<<dem<<endl;
}
