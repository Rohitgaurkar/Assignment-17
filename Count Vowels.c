#include<stdio.h>
int main()
{
    char str[20]=" MYSELF Rohit Gaurkar";
    int i=0, count=0;
    while(str[i]!='\0')
    {
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
             i++;
        }
        else
        {
             if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            count++;
             i++;
        }

    }
    printf("Total vowels of given Character is:%d",count);
    return 0;
}

