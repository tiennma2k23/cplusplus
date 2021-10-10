#include<bits/stdc++.h>

using namespace std;

#define FORb(i , b , a) for (ll i = b ; i >= a ; i --)
#define FORa(i , a , b) for (ll i = a ; i <= b ; i ++)
#define fi first
#define sd second
#define pb push_back
#define pll pair<long long, long long>
#define FastRead() ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0)

typedef long long ll;
typedef long double ld;

const ll MAXN = 3e5 + 10;
const ll MOD = 998244353;
// Biến toàn cục

ll n , cnt = 0 , x = 0 , y = 0 , xmax = 0 , xmin = 0 , ymax = 0 , ymin = 0 , ans1 , ans2;
vector<ll> p;
void right(){
   x ++;
}
void up(){
   y ++;
}
void left(){
   x --;
}
void down(){
   y --;
}
bool ck[10000010];
int main(){
     FastRead();
    freopen("SPIME.INP" , "r" , stdin);
    freopen("SPIME.OUT" , "w" , stdout);

     fill(ck , ck + 10000010 , true);
     FORa(i , 2 , 10000000){
     if(ck[i] == true){
        for(int j = i ; j <= 1e7 ; j += i){
            ck[j] = false;
        }
        p.pb(i);
     }
     }
    cin >> n;
    if(n == 2) cout << 0 << " " << 0 << endl;
    else{
        int i = 0;
     while(p[i] != n){
         while (x <= xmax){
            right();
            i ++;
            if(p[i] == n){
                cout << x << " " << y << endl;
                exit(0);
            }
        }
        xmax = x;
        while(y <= ymax) {
            up();
            i ++;
            if(p[i] == n){
                cout << x << " " << y << endl;
                exit(0);
            }
        }
        ymax = y;
        while(x >= xmin){
            left();
            i ++;
            if(p[i] == n){
                cout << x << " " << y << endl;
                exit(0);
            }
        }
        xmin = x;
        while(y >= ymin) {
            down();
            i ++;
           if(p[i] == n){
                cout << x << " " << y << endl;
                exit(0);
            }
        }
        ymin = y;
     }
     }
    }