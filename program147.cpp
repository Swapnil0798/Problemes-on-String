#include<iostream>
using namespace std;
/*
enter string:
aeouiasasa
number of vowel are length is:7
*/
int countvowel(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if((*str =='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')(*str =='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
//accept string from user and display the 
//count no of vowels of   string.
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    iret=countvowel(arr);
    cout<<"number of vowel are length is:"<<iret<<endl;

    return 0;
}