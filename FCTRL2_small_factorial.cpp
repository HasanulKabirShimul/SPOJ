#include<iostream>
using namespace std;
int arra[200] = {1};
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
    int i,m,k=0,n,carry=0,x;
        cin >> n;
        //arra[0] = 1;
        int arra[200] = {1};
        for(i=1;i<=n;i++)
        {
            for(m=0;m<=k;m++)
            {
             x = arra[m]*i+carry;
             carry = x/10;
             arra[m] = x%10;
            }
            while(carry>0)
            {
                k++;
                arra[k] = carry%10;
                carry = carry/10;
            }
        }
        for(i=k;i>=0;i--)
        {
            printf("%d",arra[i]);
        }
        printf("\n");
    }
    return 0;

}
