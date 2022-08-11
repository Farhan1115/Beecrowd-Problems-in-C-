#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[101], i, position, Max;
    for( i=0; i<100; i++ )
    {
        cin>>A[i];
    }
    Max = A[0];
    for( i=0; i<100; i++ )
    {
        if( Max<A[i] )
        {
            Max = A[i];
            position = i+1;
        }
    }
    cout<<Max<<endl<<position<<endl;
    return 0;
}
