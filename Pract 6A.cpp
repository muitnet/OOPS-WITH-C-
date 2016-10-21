/*
Implement the concept of method overriding.
*/

#include<iostream.h>
#include<conio.h>
class geometry
{
 public:
 void area(int);//circle
 void area(int,int);//rectangle
 void area(float,int,int);//triangle
 void volume(int);//sphere
};
void geometry::area(int r)
{
 cout<<"\n\tThe area of circle is:-"<<" "<<3.14*r*r;
}
void geometry::area(int l,int b)
{
 cout<<"\n\tThe area of rectangle is:-"<<" "<<l*b;
}
void geometry::area(float f,int h,int b)
{
 cout<<"\n\tThe area of triangle is:-"<<" "<<f*h*b;
}
void geometry::volume(int r)
{
 cout<<"\n\tThe volume of sphere is:-"<<" "<<(4/3)*3.14*r*r*r;
}
void main()
{
 clrscr();
 geometry g;
 int x,r,l,b,f,h;
 cout<<"\n\tMENU"<<endl;
 cout<<"\n\t1.Area of circle:"<<endl<<"\t2.Area of rectangle:"<<endl<<"\t3.Area of triamgle:"<<endl<<"\t4.Volume of sphere:"<<endl;
 cout<<"\n\tEnter your choice:"<<" ";
 cin>>x;
 switch(x)
 {
  case 1:
  cout<<"\n\tEnter the radius:"<<" ";
  cin>>r;
  g.area(r);
  break;
  case 2:
  cout<<"\n\tEnter the length and breath:"<<" ";
  cin>>l>>b;
  g.area(l,b);
  break;
  case 3:
  cout<<"\n\tEnter the height and base:"<<" ";
  cout<<"\n\tThe value of half should be 0.5";
  cin>>f>>h>>b;
  g.area(f,h,b);
  break;
  case 4:
  cout<<"\n\tEnter the radius:"<<" ";
  cin>>r;
  g.volume(r);
  break;
  default:
  break;
 }
 getch();
}
