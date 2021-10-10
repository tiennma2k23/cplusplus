#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll lim=1e14;
int main()
{
    freopen("ABC.inp","w",stdout);
    ll t=10000;
    cout<<t<<endl;
    ll tmp=1;
    while (tmp<=lim) tmp*=2;
    tmp/=2;
    while (t--)
    {
        cout<<tmp<<endl;
    }
}
