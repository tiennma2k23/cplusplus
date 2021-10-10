#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while (n>=10)
    {
        long long tmp=n;
        long long  res=0;
        while (tmp>0)
        {
            res+=tmp%10;
            tmp/=10;
        }
        n=res;
    }
    cout<<n<<endl;
}
