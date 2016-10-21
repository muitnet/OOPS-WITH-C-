/*
Write a friend function for adding the two complex numbers, using a single class.
*/



# include <iostream.h>
# include <conio.h>
class complex
{
float x,y;
public :
void getvalue(int real,int img)
{
x=real;
y=img;
}
friend void sum(complex,complex);
};
void sum(complex c1,complex c2)
{
complex c3;
cout<<"Enter First No "<<endl;
cout<<"Enter Real Part "<<endl;
cin>>c1.x;
cout<<"Enter Imaginary Part "<<endl;
cin>>c1.y;
cout<<"You Have Entered 1st no = "<<c1.x<<"+"<<c1.y<<"i"<<endl<<endl;
cout<<"Enter Second no "<<endl;
cout<<"Enter Real Part "<<endl;
cin>>c2.x;
cout<<"Enter Imaginary Part "<<endl;
cin>>c2.y;
cout<<"You Have Entered 2nd no = "<<c2.x<<"+"<<c2.y<<"i"<<endl<<endl;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
cout<<"Addition  "<<"["<<c1.x<<"+"<<c1.y<<"i]" "+" <<"["<<c2.x<<"+"<<c2.y<<"i] ="<<"["<<c3.x<<"+"<<c3.y<<"i]";
}
void main()
{
clrscr();
complex c1,c2;
sum(c1,c2);
getch();
}
