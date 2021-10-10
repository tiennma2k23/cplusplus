#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,d,bob,alice,n,i,a,t,t_max;
    bool kt;
    deque<long long> de;
    cin>>q;
    while (q--)
    {
        d=1;bob=0;alice=0;
        cin>>n;
        de.clear();
        for (i=1;i<=n;i++)
        {
            cin>>a;
            de.push_back(a);
        }
        t_max=de.front();
        bob=de.front();
        kt=true;
        de.pop_front();
        while (!de.empty())
        {
            if (kt)
            {
                t=0;
                while (t<=t_max&&!de.empty())
                {
                    t=t+de.back();
                    de.pop_back();
                }
                d++;
                alice=alice+t;
                if (t>t_max) t_max=t;
                kt=false;
            }
            else
            {
                t=0;
                while (t<=t_max&&!de.empty())
                {
                    t=t+de.front();
                    de.pop_front();
                }
                if (t>t_max) t_max=t;bob=bob+t,d++;
                kt=true;
            }
        }
        cout<<d<<" "<<bob<<" "<<alice<<endl;
    }
}
