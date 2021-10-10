#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a1,a2,a3,b1,b2,b3,n,k,l;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    k=a1+a2+a3;l=b1+b2+b3;
    while ((n--)&&(k>0||l>0))
    {
        if (k>0) k=k-5;
        else if (l>0) l=l-10;
    }
    if (k<=0&&l<=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
