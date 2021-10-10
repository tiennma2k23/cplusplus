#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long w,h,n,x,y,a;
    pair<long long,long long> d1,d2,d3,d4;
    cin>>w>>h>>n;
    d1.first=0;d1.second=h;
    d2.first=w;d2.second=h;
    d3.first=w;d3.second=0;
    d4.first=0;d4.second=0;
    while (n--)
    {
        cin>>x>>y>>a;
        if (a==1)
        {
            d1.first=max(d1.first,min(x,w));
            //d1.second=max(d1.second,min(y,h));
            d4.first=max(d4.first,min(x,w));
            //d4.second=max(d4.second,min(y,h));
        }
        else if (a==2)
        {
            d3.first=min(d3.first,min(x,w));
            //d3.second=max(d3.seond,min(y,h));
            d2.first=min(d2.first,min(x,w));
            //d4.second=max(d4.second,min(y,h));
        }
        else if (a==3)
        {
            //d2.first=min(d2.first,max(x,w));
            d4.second=max(d4.second,min(y,h));
            //d3.first=min(d3.first,max(x,w));
            d3.second=max(d3.second,min(y,h));
        }
        else if (a==4)
        {
            //d1.first=min(d2.first,max(x,w));
            d1.second=max(d1.second,min(y,h));
            //d2.first=min(d3.firstc,max(x,w));
            d2.second=min(d2.second,min(y,h));
        }
    }
    cout<<d1.second*d2.first<<endl;
}
