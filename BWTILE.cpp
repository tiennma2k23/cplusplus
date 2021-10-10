#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long m,n,k,t,sl,d,res;
    cin>>m>>n>>k;
    res=0;

    d=n/2;
    t=n-n/2;
    sl=t*(m/2)+d*(m-m/2);
    if (sl==k) res++;

    t=n/2;
    d=n-n/2;
    sl=t*(m/2)+d*(m-m/2);
    if (sl==k) res++;
    cout<<res<<endl;
}
