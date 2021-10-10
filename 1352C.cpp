#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,k,tmp,sl;
    cin>>q;
    while (q--)
    {
        cin>>n>>k;
        tmp=k%(n-1);
        sl=k/(n-1);
        if (tmp==0) tmp=n-1;
        else tmp+=n;
        cout<<(sl-1)*n+1+tmp-1<<endl;
    }
}
