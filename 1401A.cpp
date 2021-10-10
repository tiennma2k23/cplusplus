#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,a,k;
    cin>>q;
    while (q--){
    cin>>a>>k;
    a=abs(a);
    if (a<k) cout<<k-a<<endl;
    else if (a==k) cout<<0<<endl;
    else
    {
        cout<<(a-k)%2<<endl;
    }
    }
}
