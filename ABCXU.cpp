
#include<bits/stdc++.h>

using namespace std;

#define ll long long

const ll N = 1e7+500;

string s,ans;
ll d[N],demle;
string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    cin >> s;

    for ( ll i=0 ; i<s.length() ; i++ )
        d[s[i]-65]++;
    for ( ll i= 0 ; i<26 ; i++ )
        if ( d[i]%2 == 1 ) demle++;
    if ( demle >= 2 ) cout << "NO SOLUTION";
    else
    {
        for ( ll i = 0 ; i < 26 ; i++ )
            if ( d[i]%2 == 1 )
            {
                for ( ll j = 1 ; j<= d[i]/2 ; j++ )
                {
                    ans = alpha[i] + ans + alpha[i];
                }
                ans = ans + alpha[i];
                break;
            }
        for ( ll i = 0 ; i < 26 ; i++ )
            if ( d[i] % 2 == 0 )
            {
                ll m = d[i]/2;
                while ( m-- )
                    ans = alpha[i] + ans + alpha[i];
            }
            cout << ans << endl;
    }
}
