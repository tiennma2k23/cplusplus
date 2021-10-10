#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(string s1, string s2)
{
    ll sum=0;
    if (s1=="A")
    {
        if (s2=="J"||s2=="Q"||s2=="K"||s2=="10")
        {
            cout<<"Blackjack"<<endl;
            return;
        }
        sum=11;
        char ch=s2[0];
        if (ch=='A')
        {
            if (sum<=10) sum+=11;
            else sum+=1;
        }
        else sum+=ch-'0';
        cout<<min(sum+11,1ll*21)<<endl;
        return;
    }
    else if (s2=="A")
    {
        if (s1=="J"||s1=="Q"||s1=="K"||s1=="10")
        {
            cout<<"Blackjack"<<endl;
            return;
        }
        sum=11;
        char ch=s1[0];
        if (ch=='A')
        {
            if (sum<=10) sum+=11;
            else sum+=1;
        }
        else sum+=ch-'0';
        cout<<min(sum+11,1ll*21)<<endl;
        return;
    }
    else
    {
        if (s1=="J"||s1=="Q"||s1=="K"||s1=="10") sum+=10;
        else
        {
            char ch=s1[0];
            if (ch=='A')
            {
                if (sum<=10) sum+=11;
                else sum+=1;
            }
            else sum+=ch-'0';
        }
        if (s2=="J"||s2=="Q"||s2=="K"||s2=="10") sum+=10;
        else
        {
            char ch=s2[0];
            if (ch=='A')
            {
                if (sum<=10) sum+=11;
                else sum+=1;
            }
            else sum+=ch-'0';
        }
        cout<<min(sum+11,1ll*21)<<endl;
        return;
    }

}
int main()
{
    ll q;
    cin>>q;
    while (q--)
    {
        string s1,s2;
        cin>>s1>>s2;
        solve(s1,s2);
    }
}
