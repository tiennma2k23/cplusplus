#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t1,t2,a,b,c,i;
    cin>>a>>b>>c;
    t1=-(c/a);
    t2=-(c/b);
    cout<<t1<<" "<<t2<<endl;
    for (i=min(t1,t2);i<=max(t1,t2);i++)
    {
        if ((-c-i*a)%b==0) {cout<<i<<" "<<(-c-i*a)/b<<endl;exit(0);}
        //else if ()
    }
    cout<<-1<<endl;
}
