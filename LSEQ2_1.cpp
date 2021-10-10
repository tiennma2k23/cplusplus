#include<bits/stdc++.h>
using namespace std;
long long b[1000000],sl[1000000],sl2[1000000];
int main()
{
    long long int n,i,a,dem=0,d=0,max1=-1,dd,dau,l,ans1,ans2,d1,d2,ans,t,r;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        if (a==0) d++;
        else if (sl[a]==0&&a>0)
        {
            sl[a]++;
            dem++;
            b[dem]=a;
        }
        else if (sl2[abs(a)]==0&&a<0)
        {
            sl2[abs(a)]++;
            dem++;
            b[dem]=a;
        }
    }
    d1=d;
    if (d==n) {cout<<n<<endl;exit(0);}
    if (dem<=1) {cout<<n<<endl;exit(0);}
    sort (b+1,b+1+dem);
    dau=1;dd=1;
    for (i=2;i<=dem;i++)
    {
        if (b[i]-b[i-1]==1)
        {
            dd++;
            if (max1<dd) {l=dau;max1=dd;}
        }
        else {dau=i;dd=1;}
    }
    r=l+max1-1;
    ans=max1;
    ans2=max1;
    for (i=l;i>=2;i--)
    {
        if (d>=0)
        {
            t=b[i]-b[i-1]-1;
            if (t<d)
            {
                d=d-t;
                ans=ans+t+1;
            }
            else
            {
                ans=ans+d;
                d=0;
            }
        }
        else break;
    }
    if (d>=0) ans=ans+d;
    for (i=r;i<dem;i++)
    {
        if (d1>=0){
        t=b[i+1]-b[i];
        if (t<d1)
            {
                d1=d1-t;
                ans2=ans2+t+1;
            }
            else
            {
                ans2=ans2+d1;
                d1=0;
            }
        }
        else break;
    }
    if (d1>=0) ans2=ans2+d1;
    cout<<max(ans,ans2)<<endl;
}
