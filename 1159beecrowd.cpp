#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, sum, i;
    while(1)
    {
        sum=0;
        cin>>X;
        if( X==0 )
        {
            break;
        }
        for( i=X; i<=X+9; i++ )
        {
            if( i%2==0 )
            {
                sum = sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
