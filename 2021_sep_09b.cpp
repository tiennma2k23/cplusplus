#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int k,a,b,ans1,ans2;
    cin>>k>>a>>b;
    ans1=k+1;
    k-=a-1;
    ans2=a;
    ans2+=(k/2)*(b-a)+k%2;
    cout<<max(ans1,ans2)<<endl;
}
