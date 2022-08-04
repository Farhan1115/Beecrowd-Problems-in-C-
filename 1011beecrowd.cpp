#include<bits/stdc++.h>
using namespace std;

int main()
{
    double R, pi=3.14159, Volume;
    cin>>R;
    Volume = (4.0/3)*pi*pow(R,3);
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<Volume<<endl;
    return 0;
}
