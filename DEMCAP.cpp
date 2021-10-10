
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    long long N,A[100010]={0},dem=0;
  cin>>N;
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
for(int i=0;i<N-1;i++){
    stack<long long> S;
   int j=i+1;
    S.push(A[j]);
    for(int j=i+2;j<N;j++){
        if(A[j]>=S.top()&&A[i]>=S.top()) S.push(A[j]);
      if(A[i]<S.top()) break;
    }
    dem=dem+S.size();
}
 cout<<dem<<endl;
}
