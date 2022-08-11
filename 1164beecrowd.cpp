#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, i;
    cin>>N;
    for( i=1; i<=N; i++ )
    {
        int sum = 0;
        cin>>X;
        for( int j=1; j<X; j++ )
        {
            if( X%j==0 )
            {
                sum = sum+j;
            }
        }
        if( sum==X )
        {
            cout<<X<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<X<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}
