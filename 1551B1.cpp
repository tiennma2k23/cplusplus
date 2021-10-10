#include<bits/stdc++.h>
using namespace std;
int a[200001],d[200001];
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        string s;
        cin>>s;
        int ans=0;
        for (int i=0;i<s.length();i++) d[s[i]]++;
        for (char ch='a';ch<='z';ch++)
        {
            if (d[ch]>1) ans+=2;
            else if (d[ch]==1) ans+=1;
            d[ch]=0;
        }
        cout<<ans/2<<endl;
    }
}
