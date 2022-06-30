#include<iostream>
using namespace std;
/*output:
nter string:
AAAhhh
number of capital character are length is:3
*/
int countcapital(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str >='A') && (*str <='Z'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    iret=countcapital(arr);
    cout<<"number of capital character are length is:"<<iret<<endl;

    return 0;
}