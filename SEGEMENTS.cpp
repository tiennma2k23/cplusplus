#include<bits/stdc++.h>
using namespace std;
bool kt;
long long ans=0,n,i,j,a[1000000],d,sum=0;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        a[i]=sum;
    }
    for (i=1;i<=n;i++)
    {
        if (a[n]%a[i]==0)
        {
            d=1;kt=true;
            for (j=i+1;j<=n;j++)
            {
                if (a[j]==(d+1)*a[i])
                {
                    d++;
                    kt=true;
                }
                else if (a[j]>(d+1)*a[i]) {kt=false;break;}
            }
            if (kt) ans=max(ans,d);
        }
    }
    cout<<ans<<endl;
}
