#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e5+5;
long long a[maxn],t[maxn];
int main()
{
    long long n,i,tmp;
    cin>>n;
    t[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        t[i]=t[i-1]+a[i];
    }
    for (i=1;i<n;i++)
    {
        tmp=t[n]-t[i+1];
        cout<<tmp<<endl;
        if (abs(tmp-t[i])<=a[i+1])
        {
            if (t[i]<=tmp) cout<<i+1<<" "<<n-i-1<<endl;
            else cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
}
