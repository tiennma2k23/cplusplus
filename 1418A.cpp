#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b) {return a>b;}
long long a[1001],s[1001],b[1001];
int main()
{
    long long q,n,i,d;
    cin>>q;
    while (q--)
    {
        d=0;
        cin>>n;
        for (i=1;i<=n;i++) cin>>a[i];
        for (i=1;i<=n;i++)
        {
            cin>>b[i];
            if (b[i]==0)
            {
                d++;
                s[d]=a[i];
            }
        }
        sort(s+1,s+1+d,cmp);
        long long t=1;
        for (i=1;i<=n;i++)
        {
            if (b[i]==1) cout<<a[i]<<" ";
            else cout<<s[t]<<" ",t++;
        }
        cout<<endl;
    }
}
