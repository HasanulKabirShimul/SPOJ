#include<iostream>
using namespace std;
int main()
{
    unsigned long long int T;
    cin>>T;
    while(T--)
    {
        cout<<endl;
        unsigned long long int N,i,k,sum=0;
        cin>>N;
        unsigned long long int Array[N+5];
        for(i=1;i<=N;i++)
        {
            cin>>Array[i];
        }
         for(i=1;i<=N;i++)
        {
            sum= (sum+Array[i])%N;
        }
        /*
        % has been used in avobe loop just to avoid overflow in sum variable.If we used modulo in
        "if" condition,it coulb be overflowed for larger values;*/
        //cout<<sum<<endl;
        if(sum==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
        return 0;
}
