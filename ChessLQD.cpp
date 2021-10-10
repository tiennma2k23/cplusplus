#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool kt=false;
    long long int n,a,b,i;
    cin>>n>>a>>b;
    for (i=n/max(a,b);i>=0;i--)
    {
        if ((n-i*max(a,b))%min(a,b)==0) { cout<<i+(n-i*max(a,b))/min(a,b)<<endl;kt=true;break;}
    }
    if (kt==false) cout<<-1<<endl;
}
