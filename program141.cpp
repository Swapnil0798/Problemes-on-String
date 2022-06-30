#include<iostream>
using namespace std;
//output:
/*
enter string:
hello world
string length is:11
*/
int count(char str[])
{
  int icnt=0;
  while(*str !='\0')
  {
      icnt++;
      str++;
  }
  return icnt;
}
//////////////////////////////////////////////
//accept string from user and display count length of string
/////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);       /////////////////////
 
    iret=count(arr);
    cout<<"string length is:"<<iret<<endl;

    return 0;
}