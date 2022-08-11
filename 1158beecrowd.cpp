#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, Y, i, sum;
    cin>>N;
    for( i=1; i<=N; i++ )
    {
        sum = 0;
        cin>>X>>Y;
        for( int j=X; j<X+(2*Y); j++ )
        {
            if( j%2!=0 )
            {
                sum = sum+j;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
