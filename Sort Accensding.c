#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    printf("\n Enter a string that you want to be arranged in alphabetical order : ");
 	fgets(str, 50, stdin);
    int i,j,slength=0;
    slength=strlen(str);
    for(i=0;i<slength-1;i++)
    {
        for(j=i+1;j<slength;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

            }

        }
    }

         printf("%s",str);

    return 0;
}

