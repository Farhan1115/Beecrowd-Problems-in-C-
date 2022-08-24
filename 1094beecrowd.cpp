#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, x, i, C, s, R, Total;
    double X1, X2, X3;
    C=R=s=Total=0;
    char S;
    cin>>T;
    for( i=1; i<=T; i++ )
    {
        cin>>x>>S;
        Total = Total+x;
        if( S=='C' )
        {
            C = C+x;
        }
        if( S=='R' )
        {
            R = R+x;
        }
        if( S=='S' )
        {
            s = s+x;
        }
    }
    double Total1 = Total;
    X1 = (C/Total1)*100.0 ;
    X2 = (R/Total1)*100.0 ;
    X3 = (s/Total1)*100.0 ;
    cout<<"Total: "<<Total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<X1<<" %"<<endl;
    cout<<"Percentual de ratos: "<<X2<<" %"<<endl;
    cout<<"Percentual de sapos: "<<X3<<" %"<<endl;

    return 0;
}
