#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,p,t,ans,i,j;
    cin>>n>>m>>p;
    ans=n*m*(m+1)*(n+1)/4;
    if (p%2==0) t=p/2-1;
    else t=p/2;
    for (i=1;i<=min(n,t);i++)
    {
        j=min(t-i,m);
        ans-=(n-i+1)*(m*j-(j*(j+1)/2)+j);
    }
    cout<<ans<<endl;
}
