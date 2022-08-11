#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, Count=0, Sum=0;
    while(1)
    {
        cin>>N;
        if( N<0 )
        {
            break;
        }
        Sum = Sum + N;
        Count++;

    }
    double average = (double) Sum/Count;
    cout<<fixed<<setprecision(2);
    cout<<average<<endl;
    return 0;
}
