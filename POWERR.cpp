#include<bits/stdc++.h>
using namespace std;
pair<long long,long long > a[100000],pt[100000];
int main()
{
    long long i,n,dem,d=0,min1=10000,cs=1,sm,k;
    bool ck=false;

    cin>>n;
    if (n==1)
    {
        cout<<58<<endl;
        for (i=2;i<=59;i++) cout<<1<<" "<<i<<endl;
    }
    else{
    for (i=2;i<=n;i++)
    {
        dem=0;
        while (n%i==0)
        {
            dem++;
            n/=i;
        }
        if (dem>0)
        {
            d++;
            pt[d].first=i;pt[d].second=dem;
        }
    }
    //for (i=1;i<=d;i++) cout<<pt[i].first<<" "<<pt[i].second<<endl;;
    if (d==0) {ck=true;}
    for (i=1;i<=d;i++) min1=min(min1,pt[i].second);
    for (i=1;i<=d;i++)
    {
        if (pt[i].second%min1==0&&pt[i].second>1)
        {
            cs=cs*pow(pt[i].first,(pt[i].second/min1));
            sm=min1;
        }
        else
        {
            ck=true;
            k=0;
            break;
        }
    }
    if (ck) cout<<0<<endl;
    else
    {
        k=1;
        a[1].first=cs;
        a[1].second=sm;
        for (i=2;i<sm;i++)
        {
            if (sm%i==0)
            {
                k++;
                a[k].first=1;
                for (int j=1;j<=i;j++) a[k].first*=cs;
                a[k].second=sm/i;
            }
        }
        sort (a+1,a+1+k);
        cout<<k<<endl;
        for (i=k;i>=1;i--) cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    }
}
