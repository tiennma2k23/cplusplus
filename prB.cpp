#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        int xa,ya,za,xb,yb,zb,xc,yc,zc,xab,yab,xac,yac,zab,zac;
        double s,bc,h;
        int t,t1,t2,t3;
        cin>>xa>>ya>>za>>xb>>yb>>zb>>xc>>yc>>zc;
        xab=xb-xa;yab=yb-ya;zab=yb-ya;
        xac=xc-xa;yac=yc-ya;zac=yc-ya;
        t=yab*zac-zab*yab;
        t2=zab*xac-xab*zac;
        t3=xab*yac-xac*yab;
        s=(sqrt(t*t+t2*t2+t3*t3))/2;
        bc=sqrt((yc-yb)*(yc-yb)+(xc-xb)*(xc-xb)+(zc-zb)*(zc-zb));
        h=(2*s)/bc;
        cout.precision(2);
        cout<<fixed<<h<<endl;
    }
}
