#include<iostream>
using namespace std;
int main()
{
    int n,i,ans=0;
    while(1)
    {
        cin>>n;
        ans =0;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            ans = ans + (i*i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
