/*
Show the use of virtual function
*/


# include <iostream.h>
# include <conio.h>
class base
{
public:
virtual void display()
{
cout<<"You are in base class display method"<<endl;
}
virtual void show()
{
cout<<"You are in base class show method"<<endl ;
}
};
class derived:public base
{
public:
void display()
{
cout<<"you are in derived class display method"<<endl;
}
void show()
{
cout<<"You are in the derived class show method"<<endl;
}
};
void main()
{
clrscr();
base *ptr;
base b;
ptr=&b;
ptr->display();
ptr->show();
derived d;
ptr=&d;
ptr->display();
ptr->show();
getch();
}
