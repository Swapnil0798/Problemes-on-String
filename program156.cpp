#include<iostream>
using namespace std;
/*
enter first string:
abcd
enter second string:
abcd
string is  equal
*/
bool strcmpX(char *src,char *dest)
{
    while((*src !='\0')&&(*dest!='\0'))
    {
      if(*src != *dest)
    {   
        break;
    }
      src++;
      dest++;
  }

    if((*src =='\0')&&(*dest=='\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//accept two string from user and
// compare the string 

int main()
{
    char arr[20];
    char brr[20];
    bool bret;
    
     
    cout<<"enter first string:"<<endl;
    cin.getline(arr,20);    
    
    cout<<"enter second string:"<<endl;
    cin.getline(brr,20);   
 
    bret=strcmpX(arr,brr);

    if(bret==true)
    {
    cout<<"string is equal"<<endl;
    }
    else
    {
      cout<<"string is not equal"<<endl;
    }
   
    return 0;
}
