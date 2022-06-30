#include<iostream>
using namespace std;
/*
enter string:
asASAS
string in toggle are:ASasas
*/
void strtoggleX(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
           *str=*str+32;
        }
        str++;
    }
}
//accept string from user and
//convert the string are in toggle case

int main()
{
    char arr[20];
    
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    strtoggleX(arr);
    cout<<"string in toggle are:"<<arr<<endl;

    return 0;
}