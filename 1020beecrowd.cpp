#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, year, month, day;
    cin>>N;
    year = N/365;
    N = N%365;
    month = N/30;
    day = N%30;
    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
    return 0;
}
