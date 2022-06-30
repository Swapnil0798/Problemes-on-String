#include<iostream>
using namespace std;
//output:
/*
enter string:
hello world
h
e
l
l
o

w
o
r
l
d
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
    char arr[20];
    cout<<"enter string:"<<endl;
    scanf("%[^'\n']s",arr);        /////////////////////
    display (arr);

    return 0;
}