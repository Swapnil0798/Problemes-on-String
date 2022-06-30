#include<iostream>
using namespace std;
/*
enter string:
abcd
string after copy:abcd

*///187
void strcpyX(char *src,char *dest)
{
  while(*src !='\0')
  {
      *dest=*src;
       src++;    
       dest++;
  }
 *dest='\0'; 
}

//accept two string from user and
// copy the string in place

int main()
{
    char arr[20];//bharleli vahi
    char brr[20];//kori vahi
    
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    strcpyX(arr,brr);
    cout<<"string after copy:"<<brr<<endl;

    return 0;
}