#include<iostream>
using namespace std;
int i,t,T,m,n,j,flag;
int main()
{
    cin>>T;
    for(t=1; t<=T; t++)
    {
        cin>>m>>n;

           for(i=m; i<=n; i++)
        {
            flag = 0;
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==0 && i!=1)
                cout<<i<<endl;


        }
        cout<<"\n";


    }
    return 0;
}
