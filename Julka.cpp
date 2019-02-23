#include<bits/stdc++.h>
using namespace std;
int result[1000];
void add(char *s1,char *s2)
{
//    char s1[1000];
//    char s2[1000];
    //char s3[1000];
    //memset(s3,'0',sizeof(s3));
    int num1[1000];
    int num2[1000];
    int sum[1000];
    int final [1005];
    int k = 0,m,i;
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(i=0;i<l1;i++)
    {
        num1[k] = s1[i]-48;
        k++;
    }
    k = 0;
    for(i=0;i<l2;i++)
    {
        num2[k] = s2[i]-48;
        k++;
    }
    k = 0;
    i = l1-1;
    m = l2-1;
    int carry = 0;
    for(;i>=0 && m>=0;i--,m--)
    {
        sum[k] = (num1[i] + num2[m]+carry)%10;
        carry = (num1[i] + num2[m]+carry)/10;
        k++;
    }
    if(i>=0)
    {
        while(i>=0)
        {
            sum[k] = (num1[i] + carry)%10;
            carry = (num1[i]+carry)/10;
            k++;
            i--;
        }
    }
    if(m>=0)
    {
        while(m>=0)
        {
            sum[k] = (num2[m] + carry)%10;
            carry = (num2[m]+carry)/10;
            k++;
            m--;
        }
    }
    if(carry>0)
    {
        carry = carry%10;
        sum[k] = carry;
        carry = carry/10;
        k++;
    }
    i = 0;
    for(k--;k>=0;k--)
    {
        result[i]=sum[k];
        i++;
        //cout<<sum[k];
            //i++;
    }
  for(m=0;m<i;m++)
  {
      cout<<result[i];
  }
//
    cout<<endl;

}
int main()
{
    int T = 10;
    while(T--)
    {
        char s1[1000];
        char s2[1000];
        char s3[1000];
        cin>>s1>>s2;
        add(s1,s2);


    }
}
