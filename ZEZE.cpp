#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ZEZE.inp","r",stdin);
    freopen("ZEZE.out","w",stdout);
    long long m,a,dem=0,dem2=0,d=0,t=1;
    cin>>m;
    while (m--)
    {
        cin>>a;
        while (a%2==0)
        {
            dem++;
            a=a/2;
        }
        while (a%5==0)
        {
            dem2++;
            a=a/5;
        }
    }
    cout<<min(dem,dem2)<<endl;
}
