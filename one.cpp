#include <iostream>
#include<cstring>

using namespace std;

class Employee
{
protected:
     int emp_id;
     double emp_salary;
     double emp_da;
};
class data:public Employee
{
public:
    string name;
    void get_name()
    {
        cin>>name;
    }
    void get_id(int a){emp_id=a;}
    void get_salary(double a){emp_salary=a;}
    double show_salary (void)
    {
        emp_da=(20.0/100.0)*emp_salary;
        return emp_da;
    }
    int show_id(){return emp_id;}
    void show_name(){cout<<"NAME : "<<name<<endl;}
};

int main()
{
    data student[5];
    int n;
    double m;
    for(int i=0;i<5;i++)
    {
        cout<<"ENTER ID AND SALARY : "<<endl;
        cin>>n>>m;
        cout<<"ENTER NAME : "<<endl;
        student[i].get_name();
        student[i].get_id(n);
        student[i].get_salary(m);
    }
    cout<<endl<<endl;
    for(int j=0;j<5;j++)
    {
        student[j].show_name();
        cout<<"ID : "<<student[j].show_id()<<endl;
        cout<<"SALARY : "<<student[j].show_salary()<<endl;
    }
}
