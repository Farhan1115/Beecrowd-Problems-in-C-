#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N1, N2, N3, N4, N5;
    cin>>N1>>N2>>N3>>N4;
    double avg = ( N1*2 + N2*3 + N3*4 + N4*1 )/10.0;
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<avg<<endl;
    if( avg>7.0 )
    {
        cout<<"Aluno aprovado."<<endl;
    }
    if( avg<5.0 )
    {
        cout<<"Aluno reprovado."<<endl;
    }
    if( avg>=5.0 && avg<=6.9 )
    {
        cout<<"Aluno em exame."<<endl;
        cin>>N5;
        cout<<"Nota do exame: "<<N5<<endl;
        avg = (avg + N5)/2.0;
        if( avg>5.0 )
        {
            cout<<"Aluno aprovado."<<endl;
        }
        if( avg<5.0 )
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<avg<<endl;
    }
    return 0;
}
