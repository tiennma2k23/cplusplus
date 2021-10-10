#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d,n,q,x,y,t1,t2,t3;
    cin>>d>>n;
    t1=d*d+d*d;
    cin>>q;
    while (q--)
    {
        cin>>x>>y;
        t2=(x-d)*(x-d)+(y-0)*(y-0);
        t3=(x-0)*(x-0)+(y-d)*(y-d);
        if (t1+t2==t3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
