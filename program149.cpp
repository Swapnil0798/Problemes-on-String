#include<iostream>
using namespace std;
/*
enter string:
aaaaaaa
string in uppercase are:AAAAAAA
*/
void struprX(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}
//accept string from user and
// convert the string in upper case case

int main()
{
    char arr[20];
    
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    struprX(arr);
    cout<<"string in uppercase are:"<<arr<<endl;

    return 0;
}