#include<stdio.h>
int main()
{
    int len1=0,len2=0,i,j,flag;
    char string1[100];
    char string2[100];
    gets(string1);
    gets(string2);
    while(string1[len1]!='\0')
        len1++;
    while(string2[len2]!='\0')
        len2++;
    for(i=0;i<=len1-len2;i++)
    {
        for(j=i;j<=i+len2;j++)
        {
            flag=1;
            if(string1[j]!=string1[j-i])
            {
                flag = 0;
                break;
            }

        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}

