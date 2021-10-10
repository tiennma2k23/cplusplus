#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[20],q,i;
    a[0]=1;
    a[1]=3;a[2]=5;
    for (i=3;i<15;i++) a[i]=a[i-3]*10;
    cin>>q;
    while (q--)
    {
        long long t,i,k,vt,min1,ans=0,j;
        cin>>a[15]>>t;
        //cout<<a[15]<<endl;
        for (j=1;j<=1e7;j++)
        {
            min1=100000;vt=0;
            for (i=1;i<=16;i++)
            {
                k=t%a[i];
                if (min1>=k)
                {
                    min1=k;
                    vt=i;
                }
            }
            if (min1!=100000)
            {
                ans=t/a[vt];
            }
            else{ans=ans+t;min1=0;}
            t=min1;
            if (t==0) break;
        }
        cout<<ans<<endl;
    }
}
