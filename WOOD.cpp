#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t=0,m,n,i,a;
    cin>>n>>m;
    for (i=1;i<=n;i++)
    {
        cin>>a;
        t=t+a;
    }
    t=t-m;
    if (t%n==0) cout<<t/n<<endl;
    else cout<<t/n+1<<endl;
}
