#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,t=0,d=0,mang[10000],i;
    bool kt=false;
    cin>>n;
    while (n>0)
    {
        d++;
        mang[d]=n%10;
        if (n%10==0) kt=true;
        t=t+n%10;
        n=(n-n%10)/10;
    }
    if (t%3==0&&kt)
    {
        sort(mang+1,mang+1+d);
        for (i=d;i>=1;i--) cout<<mang[i];
    }
    else cout<<-1<<endl;
}
