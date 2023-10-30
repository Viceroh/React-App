#include <iostream>
#include <string>
using namespace std;

int main()

{
    float hours_worked, normal_pay, total_pay, overtime_pay, amount_hour = 1000, overtime_rate = 1.5, working_hours;
    string emp_name;
    char sentinel;
    cout<<"This program generates employees payslip"<<endl;
    cout<<"Do you want to continue?, y for YES n for NO:";
    cin>>sentinel;
    while(sentinel=="y"||sentinel="n")//using the logical OR
    {
        cout<<"Enter employee Name:";
        cin>>emp_name;
        cout<<"Enter the number of hours worked:";
        cin>>hours_worked;cout<<endl;
        if(hours_worked>working_hours)
        {
            normal_pay=working_hours*amount_hour;
            overtime_pay=(hours_worked-working_hours)*(overtime_rate*amount_hour);
            total_pay=(normal_pay+overtime_pay);
        }
        else
        {
            normal_pay=(hours_worked*amount_hour);
            overtime_pay=0.0;
            total_pay=(normal_pay+overtime_pay);
        }
cout<<"Payslip:"<<emp_name<<endl;
cout<<"......................."<<endl;
cout<<"Total Hours Worked:"<<hours_worked<<endl;
cout<<"Normal Pay:"<<normal_pay<<endl;
cout<<"Overtime pay:"<<overtime_pay<<endl;
cout<<"......................."<<endl;
cout<<"Total Pay:"<<total_pay<<endl;
cout<<"Do you want to continue? y for YES, n for NO:";
cin>>sentinel;
    }
    return 0;
    system("pause");
}