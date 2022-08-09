#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    int i, Count=0;
    for( i=1; i<=6; i++ )
    {
        cin>>N;
        if( N>0 )
        {
            Count++;
        }
    }
    cout<<Count<<" valores positivos"<<endl;
    return 0;
}
