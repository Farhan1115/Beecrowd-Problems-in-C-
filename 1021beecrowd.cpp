#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin>>N;

    //notes
    cout<<"NOTAS:"<<endl;
    int X = N*100;
    cout<<X/10000<<" nota(s) de R$ 100.00"<<endl;
    X = X%10000;
    cout<<X/5000<<" nota(s) de R$ 50.00"<<endl;
    X = X%5000;
    cout<<X/2000<<" nota(s) de R$ 20.00"<<endl;
    X = X%2000;
    cout<<X/1000<<" nota(s) de R$ 10.00"<<endl;
    X = X%1000;
    cout<<X/500<<" nota(s) de R$ 5.00"<<endl;
    X = X%500;
    cout<<X/200<<" nota(s) de R$ 2.00"<<endl;
    X = X%200;

    //coins
    cout<<"MOEDAS:"<<endl;
    cout<<X/100<<" moeda(s) de R$ 1.00"<<endl;
    X = X%100;
    cout<<X/50<<" moeda(s) de R$ 0.50"<<endl;
    X = X%50;
    cout<<X/25<<" moeda(s) de R$ 0.25"<<endl;
    X = X%25;
    cout<<X/10<<" moeda(s) de R$ 0.10"<<endl;
    X = X%10;
    cout<<X/5<<" moeda(s) de R$ 0.05"<<endl;
    X = X%5;
    cout<<X/1<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
