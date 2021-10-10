#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
bool solve0()
{
    ll i = 0 ;
    while (true)
    {
        if (i >= s.length() - 2) return true ;
        ll n = s[i] - '0';
         ll  t1 = s[i + 1] - '0';
          ll t2 = s[i + 2] - '0' ;
        if (n > t1 && n > t2) return false;
        if (n <= t1)
        {
            if (t2 >= n && t2 <= t1) i += 2 ;
            else i ++ ;
        }
        else
        {
            if (n <= t2) i += 2 ;
        }
    }
}
bool solve1()
{
    ll i = 1 ;
    while (true)
    {
        if (i >= s.length() - 2) return true ;
        ll n = s[i] - '0';
         ll  t1 = s[i + 1] - '0';
          ll t2 = s[i + 2] - '0' ;
        if (n > t1 && n > t2) return false;
        if (n <= t1)
        {
            if (t2 >= n && t2 <= t1) i += 2 ;
            else i ++ ;
        }
        else
        {
            if (n <= t2) i += 2 ;
        }
    }
}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        cin>>s;
        if (solve0()||solve1()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
