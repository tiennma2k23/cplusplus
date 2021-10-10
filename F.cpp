#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //freopen("ABC.inp","r",stdin);
    //freopen("ABC.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    while (n>1)
    {
        cout<<n<<" ";
        if (n%2==0) n/=2;
        else n=n*3+1;
    }
    cout<<n<<endl;
}
