#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,d,n;
    cin>>q;
    while (q--)
    {
        cin>>n;
        d=0;
        while (n>1)
        {
            if (n%2==1) n=n*3+1;
            else n=n/2;
            d++;
        }
        cout<<d<<endl;
    }
}
