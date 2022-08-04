#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, Max;
    cin>>A>>B>>C;
    Max = ( A+B+abs(A-B) )/2;
    Max = ( Max+C+abs(Max-C) )/2;
    cout<<Max<<" eh o maior"<<endl;
    return 0;
}
