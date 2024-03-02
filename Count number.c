#include<stdio.h>
int main()
{
    char a[]="Rohit11200@$GaurKar";
    int i=0,lower=0,upper=0,count=0,spec=0;

    while(a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
            lower++;
            i++;
        }
        else
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                upper++;
                i++;
            }else
            {
                if(a[i]>='0' && a[i]<='9')
                {
                     count++;
                       i++;
                }else
                {
                    spec++;
                    i++;
                }
            }
        }
    }
    printf("total lower aphabates are:%d",lower);
    printf("\ntotal upper aphabates are:%d",upper);
    printf("\ntotal  numbers are:%d",count);
    printf("\ntotal special character are:%d",spec);

    return 0;
}
