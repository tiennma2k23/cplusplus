#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q;
    cin>>q;
    while (q--)
    {
        long long n;
        cin>>n;
        while (true)
        {
            long long res=0, tmp=n;
            while (tmp>0)
            {
                res+=tmp%10;
                tmp/=10;
            }
            if (__gcd(n,res)>1)
            {
                cout<<n<<endl;
                break;
            }
            n++;
        }
    }
}
