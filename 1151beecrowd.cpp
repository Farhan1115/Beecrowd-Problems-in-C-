#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    A[0] = 0;
    A[1] = 1;
    for( int i=2; i<N; i++ )
    {
        A[i] = A[i-2] + A[i-1];
    }
    for( int i=0; i<N; i++ )
    {
        cout<<A[i];
        if( i<N-1 )
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
