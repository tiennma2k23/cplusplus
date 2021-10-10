#include<bits/stdc++.h>
#define int long long
using namespace std;
const int inf=1e9,maxn=2e5;;
vector<int> v;
bool ck(int x)
{
    for (int i=2;i*i<=x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
int32_t main()
{
    //freopen("fracvdiv.inp","w",stdout);
    freopen("BITSTR.inp","w",stdout);
    cout<<10<<endl;
    cout<<4<<endl;
    for (int i=0;i<10;i++)
    {
        int a=rand();
        cout<<a%2;
    }
}
