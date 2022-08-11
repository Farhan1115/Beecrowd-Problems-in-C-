#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, i;
    cin>>X;
    for( i=X; i<X+12; i++ )
    {
        if( i%2!=0 )
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
