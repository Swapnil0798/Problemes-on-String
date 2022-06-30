#include<iostream>
using namespace std;
//output:
/*
enter string
hello
h
e
l
l
o

enter string:
hello world
h
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
    char arr[20];
    cout<<"enter string:"<<endl;
    cin>>arr;
    display (arr);

    return 0;
}