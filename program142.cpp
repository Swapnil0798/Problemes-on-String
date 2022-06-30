#include<iostream>
using namespace std;
//output:
/*
enter string:
hello world
string length is:3times
*/
int count(char str[])
{
  int icnt=0;
  while(*str !='\0')
  {
      if(*str=='l')
      {
      icnt++;
      }
      str++;
  }
  return icnt;
}
//////////////////////////////////////////////
//accept string from user and display count  the occurence of letter 'l' 
//length of string
/////////////////////////////////////////////////
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);       /////////////////////
 
    iret=count(arr);
    cout<<"string length is:"<<iret<<"times"<<endl;

    return 0;
}