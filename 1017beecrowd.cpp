#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hour, speed;
    cin>>hour>>speed;
    double result = ( hour*speed )/12.0;
    cout<<fixed<<setprecision(3)<<result<<endl;
    return 0;
}
