#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (b>=a){
        if (b%2==0&&a*2<=b) cout<<"YES"<<endl;
        else if ((b-a)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
