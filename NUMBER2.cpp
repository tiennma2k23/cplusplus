#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     long long  n , A[100010] , res = 0,m,i,r;
     cin >> n;
     for (i=1;i<=n;i++) cin >> A[i];
     A[0] = 0;
     for (i=1;i<=n;i++){
       r = A[i - 1];
       A[i] -= r;
       A[i - 1] -= r;
       res += r + min(A[i] , A[i + 1]);
       m = A[i];
       A[i] -= min(m , A[i + 1]);
       A[i + 1] -= min(m , A[i + 1]);
       res += A[i] / 2;
       A[i] = A[i] % 2;
     }
     cout<<res<<endl;
}
