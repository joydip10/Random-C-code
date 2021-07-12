#include<conio.h> //another solution is here : codepirate2012.blogspot.com/2012/11/oop-toll-both-add-number-of-cars-play.html
#include<iostream>
#include<stdlib.h>


using namespace std;
int i=0;
class toolbooth
{
          unsigned int carno[10];
          double amt[10];
          public:
          void paycar(int a,double b)
          {
                   carno[i]=a;
                   amt[i]=b;
                   i++;
          }
          void nonpaycar(int a,double b)
          {
                   carno[i]=a;
                   amt[i]=b;
                   i++;
          }
          void display()
          {
                   int x,cno=0;
                   double tamt=0.0;
                   cout<<"\nCar Number\t\tAmount Paid";
                   for(x=0;x<i;x++)
                   {
                             cout<<"\n"<<carno[x]<<"\t\t"<<amt[x];
                             cno++;
                             tamt=tamt+amt[x];
                   }
                   cout<<"\nTotal Cars :"<<cno;
                   cout<<"\nTotal Amount Collected :"<<tamt;
          }
};
 int main()
{
          //clrscr();
          system("cls");
          toolbooth t1;
          unsigned int a,x;
          const int ESC=27;
          char n;
          do
          {
                   cout<<"\nEnter Car Number : (PRESS 1 TO INDICATE NO. OF CARS AT THE TOOLBOOTH)";
                   cin>>a;
                   cout<<"\nPress\n1.for Paid Car \n2.for Non Paid Car :" <<endl;
                   cin>>x;
                   if(x==1)
                   t1.paycar(a,0.50);
                   else if(x==2)
                   t1.nonpaycar(a,0.00);
                   else
                   {
                   cout<<"\nInvalid Choise";
                   }
                   cout<<"\nPress ESC to Stop :";

                   n=getch();
                   if(n==27)
                   goto exit;
          }
          while(n!=27);
          exit:t1.display();
          getch();
}
