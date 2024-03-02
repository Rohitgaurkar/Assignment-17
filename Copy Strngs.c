#include<stdio.h>
int main()
{
    char a[20]="Rohit Gaurkar", str[20];
    int i=0;

    while(a[i]!='\0')
    {
        str[i]=a[i];
        i++;
    }

   printf("%s",str);

}
