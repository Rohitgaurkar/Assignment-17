#include<stdio.h>
int main()
{
    char str[20]="rohit";
    int i=0,temp=0;
    while(str[i]!='\0')
    {

        temp++;
         i++;


    }
    for(i=temp-1;str[i];i--)
        printf("%c",str[i]);
    return 0;
}
