#include<bits/stdc++.h>
using namespace std;
int main()
{
#define TASK "DICE"
freopen(TASK ".inp","r",stdin);
freopen(TASK ".out","w",stdout);
    long long n,tmp;
    cin>>n;
    tmp=n%4;
    if (tmp==1) cout<<6<<endl;
    else if (tmp==2) cout<<4<<endl;
    else if (tmp==3) cout<<1<<endl;
    else cout<<3<<endl;
}
