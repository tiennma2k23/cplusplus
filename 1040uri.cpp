#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,m,f;
    cin>>a>>b>>c>>d;
    cout.precision(1);
    m=(a*2+b*3+c*4+d)/10;
    cout<<fixed<<"Media: "<<m<<endl;
    if (m>=7.0) cout<<"Aluno aprovado."<<endl;
    else if (m<5.0) cout<<"Aluno reprovado."<<endl;
    else if (cin>>f)
    {
        cout<<"Aluno em exame."<<endl;
        cout<<fixed<<"Nota do exame: "<<f<<endl;
        m=(m+f)/2;
        if (m<5.0) cout<<"Aluno reprovado."<<endl;
        else cout<<"Aluno aprovado."<<endl;
        cout<<fixed<<"Media final: "<<m<<endl;
    }
}
