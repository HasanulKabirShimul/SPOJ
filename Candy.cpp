#include<iostream>
using namespace std;
int main()
{
    int n;
    while(1)
    {
    int sum=0,ans = 0,i;
    cin >> n;
    int A[n+5];
    int max = 0;
    if(n==-1)
        break;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        sum = sum + A[i];
    }
    if(sum%n==0)
    {
        int average = sum/n;
        for(i=0;i<n;i++)
        {
            if(A[i]<average)
            ans += average - A[i];
        }
        cout<<ans<<endl;

    }
    else
    {
        cout<<"-1"<<endl;
    }

    }
    return 0;
}
