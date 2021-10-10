#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,l;
    cin>>n;
    k=1+8*n;
    l=sqrt(k);
    if (l*l==k) cout<<"Yes."<<endl;
    else cout<<"No."<<endl;
}
