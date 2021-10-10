#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,n;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        if (n%2==m%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
