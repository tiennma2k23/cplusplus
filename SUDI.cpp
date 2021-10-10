#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("SUDI.inp","r",stdin);
    freopen("SUDI.out","w",stdout);
    long long n,i,a[100010],min2=1e7+10,max2=0-1e7-10,j,min1=1e7+10,max1=0-1e7-10;
    unsigned long long t;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        min1=min(min1,a[i]);
        max1=max(max1,a[i]);
    }
    t=0;
    for (i=1;i<n;i++)
    {
        min2=a[i];max2=a[i];
        {
            for (j=i+1;j<=n;j++)
            {
                min2=min(min2,a[j]);
                max2=max(max2,a[j]);
                if (min2==min1&&max2==max1) {t=t+(n-j+1)*(max1-min1);break;}
                else t=t+max2-min2;
            }
        }
    }
    cout<<t<<endl;
}
