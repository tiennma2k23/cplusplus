#include<bits/stdc++.h>
using namespace std;
const long long MAXN=1e9+7;
int main()
{
    long long n,x1,x2,y1,y2,x=0,y=0,xx=MAXN,yy=MAXN;
    cin>>n;
    while (n--)
    {
        cin>>x1>>x2>>y1>>y2;
        x=max(x,x1);
        xx=min(xx,x2);
        y=max(y,y1);
        yy=min(yy,y2);
    }
}
