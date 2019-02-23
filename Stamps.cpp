#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[1400],i,m,x,total=0,T,t,count=0,n;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        total = 0,count = 0;
        cin>>x>>n;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        //cout<<endl;
        sort(num,num+n);
//        for(i=0;i<n;i++)
//        {
//            cout<<num[i]<<" "
//            ;
//        }
        for(i=n-1;i>=0;i--)
        {
            total = total + num[i];
            count++;
            if(total>=x)
            {
                break;
            }
        }
        if(count==n && total<x)
        {
            cout<<"Scenario #"<<t<<":"<<endl;
            cout<<"impossible"<<endl;
        }
        else
        {
        cout<<"Scenario #"<<t<<":"<<endl;
        cout<<count<<endl;
        }
        //cout<<endl;
    }
    return 0;
}
