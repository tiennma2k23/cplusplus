#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,q,k,l,r,max1=-100000,max2=-10000,min1=100000000000000,min2=100000000000000,i,j,t,d[100000]={0};
cin>>n>>q;
cin>>k>>l>>r;
if (k==1) {max1=l;min1=r;min2=l;max2=r;}
else cout<<n<<endl;
for (i=2;i<=q;i++)
{
    cin>>k>>l>>r;
    if (k==1) {max1=max(max1,l);min1=min(min1,r);min2=min(min2,l);max2=max(max2,r);}
    else
    {
        t=0;
        for (j=i;j>=1;j--)
        {
            if (l<=max1&&r>=min1) d[j]++;
            if (d[j]%3==0) t=t+r-l;
        }
        t=t+min2-1+n-r;
        cout<<t<<endl;
    }
}
}
