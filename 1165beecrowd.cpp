#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, i;
    cin>>N;
    for( i=1; i<=N; i++ )
    {
        cin>>X;
        int Count = 0;
        for( int j=2; j<X; j++ )
        {
            if( X%j==0 )
            {
                Count=1;
                break;
            }
        }
        if( Count==0 )
        {
            cout<<X<<" eh primo"<<endl;
        }
        else
        {
            cout<<X<<" nao eh primo"<<endl;
        }
    }
    return 0;
}
