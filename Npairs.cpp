#include<bits/stdc++.h>
#define ll long long
#define TASK "Npairs"
using namespace std;
ifstream fi( TASK ".inp");
ofstream fo( TASK ".out");
int main()
{
    ll a,b,c,d;
    fi>>a>>b>>c>>d;
    fo<<abs(a*d-b*c)-__gcd(a,c)-__gcd(b,d)+1;
}
