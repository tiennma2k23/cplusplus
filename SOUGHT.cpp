#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,a,b,c,ans1=0;
  	ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    while (n--)
    {
        cin>>a>>b>>c;
        if ((k-a)%b==0&&k-a>=0) ans1=ans1+c;
    }
    cout<<ans1<<endl;
}
// created by NMT
// Iu A5K23CVP <3
