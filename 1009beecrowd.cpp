#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    double total, x, y;
    cin>>s>>x>>y;
    total = x + (0.15*y);
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
