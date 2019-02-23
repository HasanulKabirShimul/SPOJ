#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int column,k=0,i,m;
        char string[250];
        cin >> column;
        if(column==0)
            break;
        cin >> string;
        int len = strlen(string);
        int row = len/column;
        int ans[110][50];
        for(i=1;i<=row;i++)
        {
                if(i%2!=0)
                {
                    for(m=1;m<=column;m++)
                    {
                      ans[i][m] = string[k++];
                    }
                }
                else
                {
                    for(m=column;m>=1;m--)
                    {
                        ans[i][m] = string[k++];
                    }
                }

        }
//        for(i=1;i<=row;i++)
//        {
//            for(m=1;m<=column;m++)
//            {
//                printf("%c ",ans[i][m]);
//            }
//            printf("\n");
//        }
       for(m=1;m<=column;m++)
        {

                    for(i=1;i<=row;i++)
                    {
                      printf("%c",ans[i][m]);
                    }
        }
        printf("\n");


    }
    return 0;

}
