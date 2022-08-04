#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number, work_hour;
    double salary_per_hour, Total_Salary;
    cin>>number>>work_hour>>salary_per_hour;
    Total_Salary = work_hour*salary_per_hour;
    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"SALARY = U$ "<<Total_Salary<<endl;
    return 0;
}
