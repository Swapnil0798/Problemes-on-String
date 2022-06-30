#include<iostream>
using namespace std;
/*enter string:
AAAAAAAAAAA
string in lowercase are:aaaaaaaaaaa
*/
void strlwX(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}
//accept string from user and
// convert the string in lower case

int main()
{
    char arr[20];
    
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    strlwX(arr);
    cout<<"string in lowercase are:"<<arr<<endl;

    return 0;
}