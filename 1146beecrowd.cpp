#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, i;
    while(1)
    {
        cin>>X;
        if(X==0)
        {
            break;
        }
        else
        {
            for( i=1; i<=X; i++ )
            {
                cout<<i;
                if( i==X )
                {
                    cout<<endl;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}
