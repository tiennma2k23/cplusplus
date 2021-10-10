#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<long long> a;
    string s;
    long long i;
    cin>>s;
    for (i=s.length()-1;i>=0;i--)
    {
        if (s[i]=='l') a.push_back(i+1);
        else a.push_front(i+1);
    }
    for (i=0;i<a.size();i++) cout<<a[i]<<" ";
}
