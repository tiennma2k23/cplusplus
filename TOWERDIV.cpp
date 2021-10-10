#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,q;
    cin>>q;
    while (q--){
    cin>>n>>m;
    if (m==1) cout<<2<<endl;
    else
    {
        if (n%2==0) cout<<2<<endl;
        else cout<<1<<endl;
    }
    }
}
