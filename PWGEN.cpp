#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c,a1,b1,c1,i;
    string s,s1;
    bool kt;
    cin>>n>>a>>b>>c;
    c1=c;
    //min
    //c=n-a-b;
    for (i=1;i<=n-a-b-c;i++)
    {
        if (i%2==1) s=s+' ';
        else s=s+'!';
    }
    for (i=1;i<=c;i++)
    {
        if (i%2==1) s=s+'0';
        else s=s+'1';
    }
    for (i=1;i<=a;i++)
    {
        if (i%2==1) s=s+'A';
        else s=s+'B';
    }
    for (i=1;i<=b;i++)
    {

            if (i%2==0) s=s+'b';
            else s=s+'a';
    }
    cout<<s<<endl;
    //max
    for (i=1;i<=b;i++)
    {
        if (i%2==1) s1=s1+'z';
        else s1=s1+'y';
    }
    for (i=1;i<=a;i++)

        {
            if (i%2==1) s1=s1+'Z';
            else s1=s1+'Y';
        }
    for (i=1;i<=c1;i++)
    {
        if (i%2==1) s1=s1+'9';
        else s1=s1+'8';
    }
    for (i=1;i<=n-a-b-c;i++)
    {
        if (n%2==1) s1=s1+'~';
        else s1=s1+'}';
    }
    cout<<s1<<endl;
}
