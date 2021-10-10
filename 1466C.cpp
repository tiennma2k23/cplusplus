#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ck(string x)
{
    string x1="";
    for (ll i=x.length()-1;i>=0;i--) x1+=x[i];
    if (x1==x) return true;
    return false;
}

int main()
{
    set<char> st;
    for (char ch='A';ch<='Z';ch++) st.insert(ch);
    ll q;
    cin>>q;
    while (q--)
    {
        ll dem=0;
        string s;
        cin>>s;
        for (ll i=0;i<s.length()-1;i++)
        {
            string s1="";
            s1+=s[i];
            s1+=s[i+1];
            if (ck(s1))
            {
                for (char ch='A';ch<='Z';ch++) st.insert(ch);
                st.erase (s[i-1]);
                st.erase(s[i]);
                char ch = s[i+1];
                st.erase(ch);
                st.erase(s[i+2]);
                st.erase(s[i+3]);
                s[i+1]=*st.begin();
                //st.insert (s[i-1]);
                //st.insert(s[i]);
                //st.insert(s[i+2]);
                //st.insert(ch);
                //st.insert(s[i+3]);
                dem++;
                //cerr<<i<<" "<<s1<<endl;
            }
            s1.erase(s1.length()-1,1);
            s1+=s[i+1];
                s1+=s[i+2];
                for (char ch='A';ch<='Z';ch++) st.insert(ch);
                if (ck(s1))
                {
                    st.erase(s[i]);
                    st.erase(s[i+1]);
                    char ch=s[i+2];
                    st.erase(ch);
                    st.erase(s[i+4]);
                    st.erase(s[i+3]);
                    s[i+2]=*st.begin();
                    //st.insert(s[i]);
                    //st.insert(ch);
                   // st.erase(s[i+1]);
                   // st.insert(s[i+4]);
                    //st.insert(s[i+3]);
                    dem++;
                    //cerr<<i<<" "<<s1<<endl;
                }
            }

        cout<<dem<<endl;
    }
}
