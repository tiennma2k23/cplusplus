#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long m,n,p,ans,i,j;
    cin>>n>>m>>p;
        ans=n*m*(m+1)*(n+1)/4;
        for (i=1;i<=n;i++)
            for (j=1;j<=m;j++)
                if ((i+j)*2<p) ans-=(n-i+1)*(m-j+1);
        cout<<ans<<endl;
}
