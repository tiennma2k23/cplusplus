#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  max1=0,max2=0,a,b,n;
    freopen("newf.inp","r",stdin);
    freopen("newf.out","w",stdout);
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        max1=max(max1,a);
        max2=max(max2,b);
    }
    cout<<max1<<" "<<max2;
}
