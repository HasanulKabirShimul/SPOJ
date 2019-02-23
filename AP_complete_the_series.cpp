#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        unsigned long long int p,q,sum,n,a,d,i,cnt=0;
        cin>>p>>q>>sum;
        n = (2*sum)/(p+q);
        d = (q-p)/(n-5);
        a = (p - (2*d));
        cout<<n<<endl;
        //;i = a;
        //cout<<d<<endl;
//        for(i= a;;)
//        {
//            if(cnt>=n-1)
//                break;
//            cout<<i<<" ";
//            i +=d;
//            cnt++;
//
//        }
        for(i=1;i<n;i++)
        {
            cout<<a+(i-1)*d<<" ";
        }
        cout<<a+(i-1)*d<<endl;
        //cout<<i<<endl;
        //cout<<endl;
    }
    return 0;
}
