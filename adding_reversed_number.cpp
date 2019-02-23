#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
    int T,i=0,j,k,temp = 0,check = 0,count =0;
    char s1[80] = {0};
    char s2[80] = {0};
    char Revs1[80]= {0};
    char Revs2[80] = {0};
    int num1[85]= {0};
    int num2[85] = {0};
    int sum[85]={0};
    char final[80] = {0};
    char result[80] = {0};
        i = 0;
        scanf("%s %s",s1,s2);
        int l1 = strlen(s1);
        int l2 = strlen(s2);
        /*while(i<l1)
        {
            if(s1[i]=='0')
            {
                s1[i] = s1[i+1];
            }
        }
        i = 0;
        while(i<l2)
        {
            if(s2[i]=='0')
            {
                s2[i] = s2[i+1];
            }
        }
        printf("%s\n",s1);
        printf("%s\n",s2);*/
        for(k=l1-1;k>=0;k--)
        {
            while(s1[k]=='0' && check==0)
            {
                count++;
                k--;
                if(s1[k]!='0')
                {
                    check++;
                    break;
                }
            }
            Revs1[i] = s1[k];
            i++;
            check++;

        }
        check = 0;
        //count = 0;
        i = 0;
        //int l3 =strlen(Revs1);
        //printf("%s\n",Revs1);
        for(k=l2-1;k>=0;k--)
        {
            while(s2[k]=='0' && check==0)
            {
                //count++;
                k--;
                if(s2[k]!='0')
                {
                    check++;
                    break;
                }
            }
            Revs2[i] = s2[k];
            i++;
            check++;

        }
        int m =0;
        int carry = 0;
        //printf("%s\n",Revs2);
        int R1 = strlen(Revs1);
        int R2 = strlen(Revs2);
        for(i=0;i<R1;i++)
            num1[i] = Revs1[i] - '0';
        for(k=0;k<R2;k++)
            num2[k] = Revs2[k] - '0';
        for(i=R1-1,k=R2-1;i>=0 && k>=0 ;i--,k--,m++)
        {
            sum[m] = (num1[i]+num2[k]+carry)%10;
            carry = (num1[i]+num2[k]+carry)/10;
        }
        if(R1>R2)
        {
            while(i>=0)
            {

            sum[m++] = (num1[i]+carry)%10;
            carry = (num1[i--]+carry)/10;

            }
        }
        else if(R2>R1)
        {
            while(k>=0)
            {
                sum[m++] = (num2[k]+carry)%10;
                carry = (num2[k--]+carry)/10;
            }
        }
        else
        {
            if(carry>0)
            {
                sum[m++] = carry;
            }
        }
        /*for(i=0;i<m;i++)
       {
           printf("%d",sum[i]);
       }*/
       check = 0;
       //printf("\n");
       for(i=0;i<m;i++)
       {
           final[i] = sum[i] +48;
       }
       //printf("%s\n",final);
       i = 0;
       int l3 = strlen(final);
       int flag=0;

        for(;i<l3;i++)
        {
            while(final[i]=='0' && flag==0)
            {
                i++;
            }
            printf("%c",final[i]);
            flag = 1;
        }
        printf("\n");
       //printf("%s\n",result);


    }
    return 0;
}
