#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin>>q;
    while (q--)
    {
        long long a,b;
        cin>>a>>b;
        if (a==b) cout<<"0 0"<<endl;
        else {
        long long ans1=max(a,b)-min(a,b);
        long long ans2=min(a%ans1,ans1-a%ans1);
        cout<<ans1<<" "<<ans2<<endl;
        }
    }
}
