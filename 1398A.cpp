#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e5;
long long a[MAXN];
int main()
{
    long long q,n,i,tmp,vt;
    bool kt;
    cin>>q;
    while (q--){
        cin>>n;
        for (i=1;i<=n;i++)
            {
                cin>>a[i];
            }
        if (a[1]+a[2]<=a[n]) cout<<1<<" "<<2<<" "<<n<<endl;
        else cout<<-1<<endl;
    }
}
