#include<iostream>
using namespace std;
/*
enter string:
aaaaSSSSS
number of small character are length is:4
*/
int countsmall(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str >='a') && (*str <='z'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
//accept string from user and display the 
//count of small character string
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    iret=countsmall(arr);
    cout<<"number of small character are length is:"<<iret<<endl;

    return 0;
}