#include<iostream>

using namespace std;

class shape
{
protected:
    double height,length,breadth,radius;
public:
   virtual ~shape(){cout<<"DESTRUCTING SHAPE \n";}
    void getvalues(double a,double b,double c,double d)
    {
        height=a;
        length=b;
        breadth=c;
        radius=d;
    }
   virtual double area()
    {
        return height;
    }
};
class circle:public shape
{
public:
    double area()
    {
        return 3.14159*radius*radius;
    }
    ~circle(){cout<<"DESTRUCTING CIRCLE \n";}
};
class rectangle:public shape
{
public:
    double area()
    {
        return length*breadth;
    }
    ~rectangle(){cout<<"DESTRUCTING RECTANGLE\n";}
};

int main()
{
    /*shape shp;
    circle cir;
    rectangle rec;
    cir.getvalues(1.0,2.0,3.0,4.0);
    rec.getvalues(1.0,2.0,3.0,4.0);
    cout<<"AREA : "<<cir.area()<<endl;
    cout<<"AREA : "<<rec.area()<<endl;*/

    cout<<endl<<endl;

    shape *p;
    circle c;
    rectangle r;
    p=&c;
    p->getvalues(1.0,2.0,3.0,4.0);
    cout<<"AREA : "<<p->area()<<endl;

    p=&r;
    p->getvalues(1.0,2.0,3.0,4.0);
    cout<<"AREA : "<<p->area()<<endl;
}
