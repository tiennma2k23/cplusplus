#include<bits/stdc++.h>
using namespace std;
const long long maxx=1e9+7;
int main()
{
    long long a,b,c,d,t,i,q,min1,dem[3];
    cin>>q;
    while (q--){
    cin>>a>>b>>c>>d;
    dem[1]=0,dem[0]=0;
    dem[a%2]++;dem[b%2]++;dem[c%2]++;dem[d%2]++;
    min1=min(min(a,b),c);
    if (min1==0)
    {
        if (dem[1]<=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else
    {
        if ((dem[1]>=3)||(dem[1]<=1)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    }
}
