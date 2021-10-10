#include<bits/stdc++.h>
using namespace std;
bool check(long long int n)
{
    int d=0;
    long long int dem[100000]={0},i;
    string s=to_string(n);
    for (i=0;i<s.length();i++)
    {
        dem[int(s[i])]++;
        if (dem[int(s[i])]==1) d++;
    }
    if (d==s.length()) return true;
    else return false;
}
int main()
{
    long long int n,k;
    cin>>n;
    k=n+1;
    while (k>n)
    {
        if (check(k)) {cout<<k<<endl;break;}
        k++;
    }
}
