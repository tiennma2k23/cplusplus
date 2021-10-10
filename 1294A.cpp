#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,t,q;
    cin>>q;
    while (q--){
    cin>>a>>b>>c>>n;
    t=a+b+c+n;
    if (t%3!=0) cout<<"NO"<<endl;
    else
    {
        t=t/3;
        if (t>=a&&t>=b&&t>=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
