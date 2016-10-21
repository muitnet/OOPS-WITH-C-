/*
Design a class StaticDemo to show the implementation of static variable and static function.
*/


# include <iostream.h>
# include <conio.h>
# include <string.h>
class staticdemo
{
static char shared[255];
static int buffer;
static int index;
char str[80];
int i,k;
public :
staticdemo(int w,char *s)
{
strcpy(str,s);
i=0;
k=w;
}
int putbuf()
{
if (!str[i])
{
buffer=0;
return 0;
}
if (!buffer)
buffer=k;
if (buffer!=k)
return -1;
if (str[i])
{
shared[index]=str[i];
i++;index++;
shared[index]='\0';
return 1;
}
return 0;
}
static void show()
{
cout<<shared;
}
};
char staticdemo::shared[255];
int staticdemo :: buffer=0;
int staticdemo :: index=0;
void main()
{
clrscr();
staticdemo obj1(1,"Good");
staticdemo obj2(2,"Morning");
while(obj1.putbuf() | obj2.putbuf());
cout<<"The value of shared varible of object is "<<endl;
obj1.show();
cout<<endl<<"The Value of shared variable of object2 is "<<endl;
obj2.show();
getch();
}

