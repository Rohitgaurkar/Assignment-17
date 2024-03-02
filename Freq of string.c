#include<stdio.h>
int main()
{
    char str[]="RohitGaurkar";
    int i=0,freq[150]={0};
    while(str[i]!='\0')
    {
        freq[str[i++]]++;
    }
    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
        {
            printf("%c ==> %d\n",i,freq[i]);
        }
    }
    return 0;

}
