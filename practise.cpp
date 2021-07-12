#include<iostream>

using namespace std;

class box
{
    int a;
    int b;
public:
    box()
    {
        a=6;
        b=7;
        //cout<<"a = "<<a<<"b = "<<b<<endl;
    }


    box(const box &obj)
    {

        a=obj.a;
        b=obj.b;
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
    box(int a)
    {
        cout<<"a = "<<a<<endl;
    }
};

int main()
{
    box q;
   box  p(q);


}
