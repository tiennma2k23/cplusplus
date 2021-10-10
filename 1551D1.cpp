#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    if (n*(m/2)<k)
    {
        cout<<"NO"<<endl;
        return;
    }
    if (n%2==0)
    {
        if (k%2)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if (n%2==1) {
        if (k<m/2)
        {
            cout<<"NO"<<endl;
            return ;
        }
        k-=(m / 2);
        if (k%2)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
