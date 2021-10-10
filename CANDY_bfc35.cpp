#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n,m;
    cin>>n>>m;
    int tmp=(n*(n+1))/2;
    if (m<tmp)
    {
        cout<<-1<<endl;
    }
    else
    {
        int ans1=1+(m-tmp)/n;
        int ans2=ans1+(n-1+((m-tmp)%n!=0));
        cout<<ans1<<" "<<ans2<<endl;
    }
}
