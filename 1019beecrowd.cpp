#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,hour,minute,sec;
    cin>>N;
    hour = N/3600;
    N = N%3600;
    minute = N/60;
    sec = N%60;
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
    return 0;
}
