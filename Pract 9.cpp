/*
Design a class FileDemo open a file in read mode and display the total number of words
and lines in the file.
*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
fstream file("wordcount.txt");
string s1;
int words=0, lines=0, ch_space=0;
while(!file.eof())
{
getline(file,s1);
ch_space +=s1.size();
lines++;
}
file.clear();
file.seekg(0,ios::beg);
while(!file.eof())
{
file>>s1;
words++;
}
cout<<"The file contains "<<ch_space<<"characters including spaces \n";
cout<<"The file contains "<<words<<"words \n";
cout<<"The file contains "<<lines<<"lines \n";
return 0;
}
