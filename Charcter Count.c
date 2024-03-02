#include<stdio.h>
int main()
{
    char chat='r',str[20]="Rohini Gaurkar";
    int i=0, count=0;
    while(str[i]!='\0')
    {
       if(chat==str[i])
        count++;
       i++;


    }
    printf("%d",count);
    return 0;
}
