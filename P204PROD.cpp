#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,dl,t,d[1010],dem,a,i;
    bool ck;
    cin>>q;
    while (q--)
    {
        memset(d,sizeof(d),0);
        t=0;
        dl=0;
        dem=0;
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>a;
            if (d[a]==0) dem++;
            d[a]++;
            if (a%2==1) dl++;
            t+=a;
        }
        if (t%2==1) cout<<"YES"<<endl;
        else if (dl>0&&dl<n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
