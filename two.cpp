#include<iostream>
#include<cstdio>

using namespace std;

class bank
{
protected:
    int acc_num;
    long long int balance;
public:
    bank(int a,long long int b)
    {
        acc_num=a;
        balance=b;
    }
    void show_info()
    {
        cout<<"ACCOUNT NUMBER : "<<acc_num<<endl;
        cout<<"BALANCE : Tk."<<balance<<endl;
    }
};

int main()
{
    bank mem[5]={bank(101,2300000),bank(102,5300000),bank(103,6300000),bank(104,7300000),bank(105,8300000)};
    for(int i=0;i<5;i++)
    {
        mem[i].show_info();
    }

  return 0;
}
