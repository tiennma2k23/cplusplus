#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sll,slc,l,c,tc,tl;
    cin>>n;
    if (n%2==0) c=n,l=n-1;
    else l=n,c=n-1;
    sll=(l-1)/2+1;
    slc=(c-2)/2+1;
    tl=sll*(l+1)/2;
    tc=slc*(c+2)/2;
    cout<<tc-tl<<endl;
}
