#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,b[200000],d=0,dem,i;
    string s;
    unsigned long int a,kn[200000];
    cin>>q;
    while (q--)
    {
        dem=0;
        cin>>s>>a;
        if (s=="add")
        {
            b[a]++;
            if (b[a]==1) {d++;kn[d]=a;}
        }
        else if (s=="del") b[a]--;
        else
        {
            for (i=1;i<=d;i++)
            {
                unsigned int f=kn[i]&a;
                if (f==kn[i]) dem=dem+b[kn[i]];
            }
            cout<<dem<<endl;
        }
    }
}
