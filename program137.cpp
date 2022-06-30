#include<iostream>
using namespace std;
//output:
/*
H
e
l
l
o
*/
void display(char str[])
{
  
  while(*str !='\0')
  {
      cout<<*str<<endl;
      str++;
  }
}

int main()
{
    char arr[]="Hello";
    display (arr);

    return 0;
}