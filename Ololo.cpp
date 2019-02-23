#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int A[n+5];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A+1,A+n+1);
    for(i=1;i<=n;i+=2)
    {
        if(A[i]!=A[i+1])
        {
            x = A[i];
            break;
        }
    }
    printf("%d\n",x);
    return 0;
}
