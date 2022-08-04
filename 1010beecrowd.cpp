#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p1, unit_p1, p2, unit_p2;
    double price_p1, price_p2, Total;
    cin>>p1>>unit_p1>>price_p1;
    cin>>p2>>unit_p2>>price_p2;
    Total = ( unit_p1*price_p1 ) + ( unit_p2*price_p2 );
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<Total<<endl;
    return 0;
}
