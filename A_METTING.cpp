#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n>>ch;
    while (n--)
    {
        string s;
        cin>>s;
        int dem=0;
        for (int i=0;i<s.length();i++) dem+=(s[i]==ch);
        if (dem==0) cout<<s<<endl;
    }
}
