#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,a[200100],q;
    cin>>q;
    while (q--){
    cin>>n;
    for (i=1;i<=2*n;i++) cin>>a[i];
    sort (a+1,a+1+2*n);
    cout<<abs(a[n]-a[n+1])<<endl;
    }
}
