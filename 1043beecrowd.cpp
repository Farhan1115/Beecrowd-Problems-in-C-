#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    cin>>A>>B>>C;
    cout<<fixed<<setprecision(1);
    if( A+B>C && B+C>A && C+A>B )
    {
        cout<<"Perimetro = "<<A+B+C<<endl;
    }
    else
    {
        double area = ( (A+B)/2.0 )*C;
        cout<<"Area = "<<area<<endl;
    }
    return 0;
}
