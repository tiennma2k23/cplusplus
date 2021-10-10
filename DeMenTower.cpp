#include<bits/stdc++.h>
using namespace std;
void Tower(int n , char a, char b, char c ){
    if(n==1){
        cout<<a<<" "<<c<<endl;
        return;
    }
    Tower(n-1,a,b,c);
    Tower(1,a,c,b);
    Tower(n-1,c,b,a);
    Tower(1,b,a,c);
    }
int main(){
    char a='1', b='2', c='3';
    int n;
    //freopen("DeMenTower.INP","r",stdin);
    freopen("DeMenTower.OUT","w",stdout);
    cin>>n;
    cout<<n*n*n<<endl;
    Tower(n,a,b,c);
    cout<<a<<" "<<b<<endl;
    cout<<b<<" "<<c<<endl;
}
