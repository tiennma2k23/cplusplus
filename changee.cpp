#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        for (int i=0;i<s.length();i++) s[i]=tolower(s[i]);
        for (int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if (ch=='a'||ch=='u'||ch=='i'||ch=='e'||ch=='o')
            {
                ch=toupper(ch);
                cout<<ch;
            }
            else
            {
                cout<<ch;
            }
        }
        cout<<endl;
    }
}
