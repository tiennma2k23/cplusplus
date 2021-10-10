#include<bits/stdc++.h>

using namespace std;
int main(){
     string s , res;
     cin >> s;
     int m , a[200010] , d[100010],i;
     cin >> m;
     for(i=0;i<m;i++){
        cin >> a[i];
        d[a[i] - 1] ++;
     }
     for(i=0;i<100000;i++){
      d[i] = d[i - 1] + d[i];
     }
     for(i=0;i<s.length()/2;i++){
      if(d[i] % 2 == 1) swap(s[i] , s[s.length() - i - 1]);
     }
     cout << s << endl;
}
