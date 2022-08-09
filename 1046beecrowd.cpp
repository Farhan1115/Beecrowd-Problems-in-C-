#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, hour;
    cin>>x>>y;
    if( x>=y )
    {
        hour = y+24-x;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
    }
    else
    {
        hour = y-x;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S)"<<endl;
    }
    return 0;
}
