#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,q,t,a;
    cin>>q;
    while (q--){
    cin>>n>>m;
    t=0;
    while (n--)
    {
        cin>>a;
        t=t+a;
    }
    cout<<min(t,m)<<endl;
    }
}
