#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,d,a,b,c;
    cin>>q;
    while (q--)
    {
        d=0;
        cin>>a>>b>>c;
        if (a>=1) {d++;a--;}
        if (b>=1) {d++;b--;}
        if (c>=1) {d++;c--;}
        cout<<d<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
        if (a>=1&&c>=1)
        {
            d++;a--;c--;
        }
        if (a>=1&&b>=1)
        {
            d++;a--;b--;
        }
        if (b>=1&&c>=1)
        {
            d++;b--;c--;
        }
        if (a>=1&&b>=1&&c>=1)
        {
            d++;a--;b--;c--;
        }
        cout<<d<<endl;
    }
}
