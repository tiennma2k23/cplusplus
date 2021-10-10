#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
    long long n,k,i,a[100100],i1,j,d;
    unsigned long long tmp;
    cin>>n>>k;
    for (i=1;i<=n;i++) cin>>a[i];
    tmp=1;
   for (i1=1;i1<=k;i1++)
    {
        d=0;
        if (i1>31) cout<<0<<endl;
        else
        {
            tmp=tmp*2;
            for (i=1;i<n;i++)
            {
                if (a[i]<=tmp)
                {
                    for (j=i+1;j<=n;j++) if (a[j]==tmp-a[i]) d++;
                }
            }
            cout<<d<<endl;
        }
    }
}
