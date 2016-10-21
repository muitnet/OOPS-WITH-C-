/*
Inheritance in C++
*/


# include <iostream.h>
# include <conio.h>
class first
{
protected:
int i;
public:
void getFnum()
{
cout<<"enter any no  ";
cin>>i;
}
};
class second
{
protected:
int j;
public:
void getSnum()
{
cout<<"enter any no  ";
cin>>j;
}
};
class third:public first ,public second
{
public:
void display()
{
cout<<"Multiplication is : " <<i*j;
}
};
void main()
{
clrscr();
third t;
t.getFnum();
t.getSnum();
t.display();
getch();
}
