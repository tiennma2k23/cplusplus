
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int len=1,j=0;
    for (int i=1;i<n;i++)
    {
        if (s[i]>s[j]) break;
        else if (s[i]<s[j])
        {
            len=i+1;
            j=0;
        }
        else j=(j+1)%len;
    }
    for (int i=0;i<k;i++) cout<<s[i%len];
}
