#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tmp;
    bool kt;
    //freopen("NIM.in","r",stdin);
    //freopen("NIM.out","w",stdout);
    cin>>n;
    tmp=sqrt(n);
    kt=false;
    while (tmp>0)
           {
               if (!kt) kt=true;
               else kt=false;
                n=n-tmp;
                tmp=sqrt(n);
           }
    if (kt) cout<<"WIN"<<endl;
    else cout<<"LOSE"<<endl;
}
