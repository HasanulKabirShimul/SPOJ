#include<bits/stdc++.h>
using namespace std;
int Natural[1000000];
int A[1000000];
int final[1000000];
int main()
{
//    int Natural[1000000];
//    int A[1000000];
    int n;
    while(cin>>n)
    {
        int i,k2,k1,k,m,check = 0;
        int A[1000000] = {0};
        int final[1000000] = {0};
        if(n==0)
            break;
        for(int i = 1; i<=n; i++)
        {
            cin>>A[i];
            //C[i] = A[i];
        }
        k = 1;
        m = 1;
        while(k<=n)
        {
            for(i=1; i<=n; i++)
            {
                if(A[i]==k)
                {
                    final[m] = i;
                    m++;
                    break;
                }
            }
            k++;
        }
        m--;
        check = 0;
        for(k1=1,k2=1; k1<=n; k1++,k2++)
        {
            if(A[k1]==final[k2])
            {
                continue;
            }
            else
            {
                check = 1;
                break;
            }
        }
        //cout<<"m = "<<m<<endl;

        if(check==0)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
    return 0;
}
