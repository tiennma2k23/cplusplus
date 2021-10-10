#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long q,m,n;
    cin>>q;
    while (q--)
    {
        cin>>m>>n;
        if (m%n==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
