#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int T,x,ans,i;
    cin>>T;
    while(T--)
    {
        ans = 0;
        cin>>x;
        ans = (x-1)*250 + 192;
        cout<<ans<<endl;
    }
    return 0;
}
