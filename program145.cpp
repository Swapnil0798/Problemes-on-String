#include<iostream>
using namespace std;
/*
enter string:
asasa adad aass
number of space  are length is:2
*/
int countspace
(char str[])
{
    int icnt=0;

    while(*str!='\0')
    {
        if(*str ==' ') 
        {
            icnt++;
        }
        str++;
    }
    return icnt;
}
//accept string from user and display the 
//count of space  string.
int main()
{
    char arr[20];
    int iret=0;
     
    cout<<"enter string:"<<endl;
    cin.getline(arr,20);     
 
    iret=countspace(arr);
    cout<<"number of space  are length is:"<<iret<<endl;

    return 0;
}