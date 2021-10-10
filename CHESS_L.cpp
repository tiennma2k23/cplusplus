#include<bits/stdc++.h>
using namespace std;
const long long MAXX=2e5;
int main()
{
    char ch;
    long long n;
    freopen("CHESS_L.inp","r",stdin);
    freopen("CHESS_L.out","w",stdout);
    cin>>ch>>n;
    if (ch=='T')
    {
        if (n<=MAXX)
        {
            if (n%2==0) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else cout<<1<<endl;
    }
    else
    {
        if (n<=MAXX)
        {
            if (n%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else cout<<0<<endl;
    }
}
