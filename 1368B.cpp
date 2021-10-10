#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k1,tmp1,tmp,i,i1;
    double k,l=10,j;
    cin>>k;
    string s="codeforces";
    j=1;
    for (i=0;i<s.length();i++)
    {
        k=k/j;
        cout<<k<<endl;
        long long k1=k;
        long long tmp=pow(k,1/l);
        tmp1=tmp;
        if (tmp==0) cout<<s[i];
        while (tmp1>0)
        {
            if (k1%tmp1==0) break;
            else tmp1++;
        }
        for (i1=1;i1<=tmp1;i1++) cout<<s[i];
        l--;
        j=double(tmp1);
        cout<<j;
    }
}
