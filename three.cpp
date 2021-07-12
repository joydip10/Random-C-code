#include<iostream>
using namespace std;

class employee
{
	int   emp_no;
	char  emp_name[20];
	float emp_sal;


	public:

		void get_data();
		void find_net_sal();
		void show_emp_details();
		void showofficer();
};

void employee :: get_data()
{
	cout<<"\nEnter employee number:\n";
	cin>>emp_no;
	cout<<"\nEnter employee name:\n";
	cin>>emp_name;
	cout<<"\nEnter employee salary:\n";
	cin>>emp_sal;
}

void employee :: show_emp_details()
{
    cout<<"\n\n\nDetails of   :  "<<emp_name;
	cout<<"\n\nEmployee number:      "<<emp_no;
    cout<<"\n salary     :  "<<emp_sal;
}
void employee :: showofficer()
{
    if(emp_sal>20000)

        return show_emp_details() ;
}

int main()
{
	employee emp[10];
	int i,num;


	cout<<"\nEnter number of employee details\n";
	cin>>num;

	for(i=0;i<num;i++)
		emp[i].get_data();
    for(i=0;i<num;i++)
        emp[i].showofficer();


	return 0;
}
