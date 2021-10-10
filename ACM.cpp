#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    freopen("ACM.inp","r",stdin);
    freopen("ACM.out","w",stdout);
    unsigned long long int i=0,d=0,kq=0,n,dem[1000];
    string s[1001];
    char ch;
    while (true)
    {
        i++;
        cin>>n;
        if (n==-1) break;
        cin>>ch>>s[i];
        if (s[i]=="wrong") {dem[int(ch)]++;}
        else if (s[i]=="right") {d++;kq=kq+dem[(int)(ch)]*20+n;dem[int(ch)]=0;}
    }
    cout<<d<<" "<<kq;
}
