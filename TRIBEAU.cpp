#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a>b) swap(a,b);
    if (b>c) swap(b,c);
    if (a>c) swap(a,c);
    if (c-a<=d)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}

