#include<stdio.h>
int main()
{
    char lower[20],str[20]="ROHITASHISH";
    int i;
    for(i=0;str[i];i++)
    {
        lower[i]=str[i]+32;
    }
    printf("%s",lower);
    return 0;
}

