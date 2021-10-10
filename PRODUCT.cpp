#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    //freopen("PRODUCT.inp","r",stdin);
    //freopen("PRODUCT.out","w",stdout);
    cin>>a>>b;
    if (a==0||b==0) cout<<0<<endl;
    else if ((a>0&&b<0)||(a<0&&b>0)) cout<<-1<<endl;
    else cout<<1<<endl;
}
