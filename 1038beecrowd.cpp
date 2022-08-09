#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y;
    double price;
    cin>>X>>Y;
    cout<<fixed<<setprecision(2);
    if( X==1 )
    {
        price = Y*4.00;
        cout<<"Total: R$ "<<price<<endl;
    }
    if( X==2 )
    {
        price = Y*4.50;
        cout<<"Total: R$ "<<price<<endl;
    }
    if( X==3 )
    {
        price = Y*5.00;
        cout<<"Total: R$ "<<price<<endl;
    }
    if( X==4 )
    {
        price = Y*2.00;
        cout<<"Total: R$ "<<price<<endl;
    }
    if( X==5 )
    {
        price = Y*1.50;
        cout<<"Total: R$ "<<price<<endl;
    }
    return 0;
}
