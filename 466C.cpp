#include<bits/stdc++.h>
using namespace std;
 long long int res=0,tong=0,sum=0,dem[500100],t[500100],a[500100],i,n;
int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        t[i]=sum;
    }
    if (sum%3!=0) cout<<0<<endl;
    else
    {
        sum=sum/3;
        dem[0]=0;
        for (i=1;i<=n;i++)
        {
                if (t[i]==sum) dem[i]=dem[i-1]+1;
                else dem[i]=dem[i-1];
        }
        for (i=n;i>=1;i--)
        {
            tong=tong+a[i];
            if (tong==sum) res=res+dem[i-2];
        }
        cout<<res<<endl;
    }
}
