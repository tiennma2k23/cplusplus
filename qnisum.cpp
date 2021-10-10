#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
using namespace std;
int32_t main()
{
    uint n;
    cin>>n;
    uint res=calc(n);
    res+=calc1(n);
    cout<<res<<endl;
}
