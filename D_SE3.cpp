#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6+1;
int32_t main()
{
    int n,ans=0;
    cin>>n;
    for (int i=1;i<=maxn;i++)
    {
        ans=((ans*10)+3)%n;
        if (ans==0)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
