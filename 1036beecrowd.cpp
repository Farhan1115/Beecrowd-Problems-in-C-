#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, D, x1, x2;
    cin>>A>>B>>C;
    D = ( (B*B)-4*A*C );
    if( D>0 && A!=0 )
    {
        x1 = ( -B+sqrt(D) )/(2*A);
        x2 = ( -B-sqrt(D) )/(2*A);
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<x1<<endl;
        cout<<"R2 = "<<x2<<endl;
    }
    else
    {
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
