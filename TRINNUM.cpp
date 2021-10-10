#include<bits/stdc++.h>

#define st first
#define nd second
#define ll long long
#define ld long double
#define y1 yy
#define data Data

using namespace std ;

typedef pair< int , int > ii ;
typedef pair< ll , ll > lii ;
typedef pair< int , ii > iii ;

const int maxn = 509 + 3 ;
const int maxm = 1e6 + 3 ;
const int mod = 1e9 + 7 ;
const int oo = 1061109567 ;
const ll loo = 4557430888798830399 ;
const ld pi = 3.141592653589793238462643383279502884 ;

void input() {
	ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
}

int n , m ;
int p[5] , cnt[5] , a[maxm][5] ;
ll d1[13][13][13][13][13] , d2[13][13][13][13][13] ;
ll ans = 0 ;

int main() {
	input();
	cin >> n >> m ;
	int id = -1 ;
	for (int i = 2 ; i <= sqrt(m) ; ++ i) {
        if (m % i == 0) {
            p[++ id] = i ;
            while (m % i == 0) {
                m /= i ;
                cnt[id] ++ ;
            }
        }
	}
	if (m > 1) {
        if (p[id] == m) cnt[id] ++ ;
        else {
            p[++ id] = m ;
            cnt[id] ++ ;
        }
	}
    for (int i = 1 , x ; i <= n ; ++ i) {
        cin >> x ;
        if (x == 0) {
            for (int j = 0 ; j < 5 ; ++ j) a[i][j] = cnt[j] ;
        }
        else {
            for (int j = 0 ; j < 5 ; ++ j) {
                if (!p[j]) continue ;
                while (x % p[j] == 0 && a[i][j] < cnt[j]) {
                    x /= p[j] ;
                    a[i][j] ++ ;
                }
            }
        }
        d1[a[i][0]][a[i][1]][a[i][2]][a[i][3]][a[i][4]] ++ ;
    }
    for (int i = 1 ; i <= n ; ++ i) {
        for (int i0 = 0 ; i0 <= cnt[0] ; ++ i0)
            for (int i1 = 0 ; i1 <= cnt[1] ; ++ i1)
                for (int i2 = 0 ; i2 <= cnt[2] ; ++ i2)
                    for (int i3 = 0 ; i3 <= cnt[3] ; ++ i3)
                        for (int i4 = 0 ; i4 <= cnt[4] ; ++ i4)
                            d2[min(a[i][0] + i0 , cnt[0])][min(a[i][1] + i1 , cnt[1])][min(a[i][2] + i2 , cnt[2])][min(a[i][3] + i3 , cnt[3])][min(a[i][4] + i4 , cnt[4])] += d1[i0][i1][i2][i3][i4] ;
    }
    for (int i = 1 ; i <= n ; ++ i) {
        for (int i0 = cnt[0] - a[i][0] ; i0 <= cnt[0] ; ++ i0)
            for (int i1 = cnt[1] - a[i][1] ; i1 <= cnt[1] ; ++ i1)
                for (int i2 = cnt[2] - a[i][2] ; i2 <= cnt[2] ; ++ i2)
                    for (int i3 = cnt[3] - a[i][3] ; i3 <= cnt[3] ; ++ i3)
                        for (int i4 = cnt[4] - a[i][4] ; i4 <= cnt[4] ; ++ i4)
                            ans += d2[i0][i1][i2][i3][i4] ;
    }
    cout << ans ;

	return 0;
}
