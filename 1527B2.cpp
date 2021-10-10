#include<bits/stdc++.h>
#define int long long
#define tien dichepcode
using namespace std;
const int maxn=2e5+1 ;
char ch[maxn];
int n;
void solve_1()
{
    int ktr = 0 ;
    for ( int i = 1 ; i <= n ; ++i )
    {
        if ( ch[i] == '0' ) ktr++;
    }
    if ( ktr % 2 == 0 ) cout<<"BOB"<<endl;
    else
    {
        if ( ktr  == 1 ) cout << "BOB"<<endl;
        else cout << "ALICE" <<endl;
    }
}
void solve_2()
{
    int ktr = 0 ;
    for ( int i = 1 ; i <= n ; ++i )
    {
        if ( ch[i] == '0' ) ktr++;
    }
    if ( ktr == 2 && n % 2 == 1 && ch[n/2+1] =='0' ) cout<<"DRAW"<<endl;
    else cout << "ALICE" <<endl;
}

void solve()
{
    cin >> n;
    for ( int i = 1 ; i <= n ; i++) cin >> ch[i] ;
    int ck = 0 ;
    for ( int i = 1 ; i <= n/2 ; i++ )
    {
        if ( ch[i] != ch[n-i+1] )
        {
            ck = 1 ;
            break ;
        }
    }
    if ( ck == 1 ) solve_2();
    else solve_1();
}

int32_t main()
{
    int q;
    cin>>q;
    while (q--) solve();
}
