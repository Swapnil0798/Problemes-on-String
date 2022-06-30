#include<iostream>
using namespace std;
/*
enter string:
abcde
string after reverse:edcba

enter string:
ABCDE
string after reverse:EDCBA
*/
void strreverseX(char *str)
{
  char *start=str;
  char *end=str;
  char temp;

  while(*end!='\0')
  {
      end++;
  }
  end--;
  while(start<end)
  {
    temp=*start;
    *start=*end;
    *end=temp;

    start++;
    end--;
  }
 
}

//accept string from user and
// reverse the string in place

int main()
{
    char arr[20];
    
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    strreverseX(arr);
    cout<<"string after reverse:"<<arr<<endl;

    return 0;
}