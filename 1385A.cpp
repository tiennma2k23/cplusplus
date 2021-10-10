#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long maxab,maxbc,x,y,z,maxac,q,a,b,c;
    cin>>q;
    while (q--){
    cin>>x>>y>>z;
    bool kt=true;
    if (x==y) a=x;
    else a=min(x,y);
    if (y==z) c=y;
    else c=min(y,z);
    if (x==z) b=z;
    else b=min(x,z);
    if (max(a,b)==x&&max(b,c)==z&&max(a,c)==y) cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
    else cout<<"NO"<<endl;
    }
}
