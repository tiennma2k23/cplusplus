#include<iostream>
using namespace std;

int main(){
int n;
long long a,b,d;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b>>d;
    d++;
    if(a<=b*d and b<=a*d){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}
return 0;
}
