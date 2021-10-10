#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n,a,b,tmp,ans;
cin>>n;
while (n--)
{
    cin>>a>>b;
    tmp=min(a,b);
    ans=(b/tmp)*(b/tmp)*(tmp-b%tmp)+(b%tmp)*(b/tmp+1)*(b/tmp+1);
    cout<<ans<<endl;
}
}
