#include<stdio.h>
int main()
{
    char upp[20],str[20]="tushar";
    int i;
    for(i=0;str[i];i++)
    {
        upp[i]=str[i]-32;
    }
    printf("%s",upp);
    return 0;
}
