#include<bits/stdc++.h>
using namespace std;
void sol()
{
     long long  n,sum=0,ans=0,ans1;
    long long x;
    cin>>n>>x;
    for (int i=1;i<=n;i++)
    {
        long long  a;
        cin>>a;
        ans+=(a/x)+(a%x!=0);
        sum+=a;
    }
    ans1=(sum/x)+(sum%x!=0);
    cout<<ans1<<" "<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t;
    cin>>t;
    while (t--){
   sol();
    }
}
