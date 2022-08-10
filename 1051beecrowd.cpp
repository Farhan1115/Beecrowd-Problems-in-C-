#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X, tax1=0.0, tax2=0.0, tax3=0.0, total;
    cin>>X;
    cout<<fixed<<setprecision(2);
    if( X>=0.0 && X<=2000.0 )
    {
        cout<<"Isento"<<endl;
    }
    else if( X>2000.0 && X<=3000.0 )
    {
        tax1 = (X-2000.0)*0.08;
        cout<<"R$ "<<tax1<<endl;
    }
    else if( X>3000.0 && X<=4500.0 )
    {
        tax1 = 1000*0.08;
        tax2 = (X-3000.0)*0.18;
        total = tax1 + tax2;
        cout<<"R$ "<<total<<endl;
    }
    else if( X>4500.0 )
    {
        tax1 = 1000*0.08;
        tax2 = 1500*0.18;
        tax3 = (X-4500.0)*0.28;
        total = tax1 + tax2 + tax3;
        cout<<"R$ "<<total<<endl;
    }
    return 0;
}
