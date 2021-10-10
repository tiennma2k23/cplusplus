#include<bits/stdc++.h>
using namespace std;
long long findXOR(long long n)
{
    long long mod = n % 4;
    if (mod == 0)
        return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;
    else if (mod == 3)
        return 0;
}
long long findXOR(long long l, long long r)
{
    return (findXOR(l - 1) ^ findXOR(r));
}
int main()
{
    long long t,l,r;
    cin >> t;
    while(t--){
     cin >> l >> r;
    cout << findXOR(l, r)<< endl;;
    }
    return 0;
}
