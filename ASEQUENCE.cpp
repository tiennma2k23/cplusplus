#include<bits/stdc++.h>
using namespace std;
const long long maxn=1e6+10;
long long n,a[maxn],i,tmp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    cin>>a[1]>>a[2];
    tmp=a[2]-a[1];
    for (i=3;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]-a[i-1]!=tmp)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
    }
    cout<<"YES"<<endl;
}
