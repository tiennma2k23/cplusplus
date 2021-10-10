#include <bits/stdc++.h>
using namespace std;
long long random(long long minN, long long maxN){
    return minN + rand() % (maxN + 1 - minN);
}
const long long MAXN=1e18,maxn=5000,minn=1e16;
int main(){
    //freopen("MATH.inp","w",stdout);
    srand((unsigned long long )time(0));
    long long r;
    //cout<<maxn<<endl;
    for(long long i = 0; i < 15; ++i){
        r = random(0,9);
        cout<<r;
    }
}
