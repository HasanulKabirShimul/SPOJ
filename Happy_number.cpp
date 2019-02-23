#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,rem,div,happy=0,unhappy=0,cnt=0,temp=0;
    cin>>n;
    while(1)
    {
        while(n)
        {
            rem = n%10;
            sum += (rem*rem);
            n/=10;
            //temp = sum;
            if(n==0)
            {

                n = sum;
                cnt++;
                if(sum==1)
                {
                    happy++;
                    break;
                }
                if(sum==4)
                {
                    unhappy++;
                    break;
                }
                sum = 0;
            }
        }
        break;
    }
    if(happy) cout<<cnt<<endl;
    if(unhappy) cout<<"-1"<<endl;
    return 0;
}
