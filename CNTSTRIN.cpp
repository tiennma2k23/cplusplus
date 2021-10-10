#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long add[10000],i,cl=0,ans=0,n,add2[10000];
    string s;
    cin>>n;
    cin>>s;
    memset(add,0,10000);
    memset(add2,0,10000);
    add[0]=1;
    for (i=0;i<n;i++)
    {
        if (s[i]=='x') cl--;
        else cl++;
        if (cl<0) {ans=ans+add2[abs(cl)];add2[abs(cl)]++;}
        else {ans=ans+add[cl];add[cl]++;}
    }
    cout<<ans<<endl;
}
