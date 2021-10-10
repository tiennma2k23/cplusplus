#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,tmp,ans;
    cin>>n>>a>>b>>c;
    ans=n/a;
    tmp=1;
    n=n-b;
    tmp=tmp+n/(b-c);
    n=(n%(b-c))+c;
    tmp+=n/a;
    cout<<max(ans,tmp)<<endl;
}
