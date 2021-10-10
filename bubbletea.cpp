#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5,MAX=3e5;
int main()
{
    long long n,i,a[MAXN],dem=0;
    //freopen("bubbletea.inp","r",stdin);
    //freopen("bubbletea.out","w",stdout);
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    sort (a+1,a+1+n);
    a[n+1]=MAX;
    i=1;
    while (i<=n)
    {
        if (a[i+1]-a[i]<=2) dem++,i+=2;
        else dem++,i+=1;
    }
    cout<<dem<<endl;
}
