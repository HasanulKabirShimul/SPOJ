#include<iostream>
#define LL long long int
using namespace std;
LL d(LL b,LL p,LL m)
{
    m=10;
    LL ans;
    if(p==0)
        return 1;
    else if(p%2==0)
    {
       LL p1 = (d(b,p/2,m))%m;
        LL ans = (p1*p1)%m;
        return ans;
    }
    else if(p%2==1)
    {
       LL p1 = b%m;
        LL  p2 = (d(b,p-1,m))%m;
        LL ans = (p1*p2)%m;
        return ans;

    }
    return ans;
}
int main()
{
    LL T;
    cin>>T;
    while(T--)
    {
        LL a ,b,p,ans;
        cin >>b>>p;
        ans = d(b,p,10);
        cout<<ans<<endl;
    }
    return 0;
}
