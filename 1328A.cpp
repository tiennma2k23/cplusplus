#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,q;
    cin>>q;
    while (q--){
    cin>>a>>b;
    cout<<(b-(a%b))%b<<endl;
    }
}
