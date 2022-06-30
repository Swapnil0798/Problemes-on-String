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
void strconcatX(char *src,char *dest)
{
    while(*src!='0')
    {
        src++;
    }

  while(*dest !='\0')
  {
      *src=*dest;
       src++;    
       dest++;
  }
 *src='\0'; 
}

//accept two string from user and
// concatination the string in place

int main()
{
    char arr[20];
    char brr[20];
    
     
    cout<<"enter first string:"<<endl;
    cin.getline(arr,20);    
    
    cout<<"enter second string:"<<endl;
    cin.getline(brr,20);   
 
    strconcatX(arr,brr);


    cout<<"string after concatination:"<<arr<<endl;

    return 0;
}