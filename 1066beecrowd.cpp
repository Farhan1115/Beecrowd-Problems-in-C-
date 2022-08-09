#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, i, even, odd, pos, neg;
    even=odd=pos=neg=0;
    for( i=1; i<=5; i++ )
    {
        cin>>N;
        if( N>0 )
        {
            pos++;
        }
        if( N<0 )
        {
            neg++;
        }
        if( N%2==0 )
        {
            even++;
        }
        if( N%2!=0 )
        {
            odd++;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}
