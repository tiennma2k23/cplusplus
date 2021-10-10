#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
freopen ("ACTIVITY.inp","r",stdin);
freopen ("ACTIVITY.out","w",stdout);
int t,i; long long int m,n,k,a,b;
cin>>t;
for (i=1;i<=t;i++)
{

    cin>>m>>n>>k>>a>>b;
    cout<<min(min(m/a,n/b),(m+n-k)/(a+b))<<endl;
}
}
