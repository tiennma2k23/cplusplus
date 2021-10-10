#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin>>q;
    while (q--)
    {
        long long n,maxx=-1,i,a[100000],t=0,d=0;
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
            if (a[i]!=-1) { t=t+a[i];d++;}
        }
        if (d==0) cout<<0<<" "<<5<<endl;
        else{
        t=t/d;
        for (i=1;i<=n-1;i++)
        {
            if (a[i]==-1) a[i]=t;
            if (a[i+1]==-1) a[i+1]=t;
            maxx=max(maxx,abs(a[i]-a[i+1]));
        }
        cout<<maxx<<" "<<t<<endl;
        }
    }
}
