/*
Show the implementation of template class library for swap function.
*/

# include <iostream.h>
# include <conio.h>
template <class t> t swap (t &a,t & b)
{
t temp;
temp=a;
a=b;
b=temp;
return 0;
}
void main()
{
int a,b;
float f1,f2;
char c1,c2;
clrscr();
cout<<"\nEnter two Integer Values ";
cin>>a>>b;
swap(a,b);
cout<<"\nInteger Values After Swapping "<<a<<" "<<b;
cout<<"\nEnter two Float Values ";
cin>>f1>>f2;
swap(f1,f2);
cout<<"\nFloat Values After Swapping "<<f1<<" "<<f2;
cout<<"\nEnter two Charecters ";
cin>>c1>>c2;
swap(c1,c2);
cout<<"\nCharcter Values After Swapping "<<c1<<" "<<c2;
getch();
}
