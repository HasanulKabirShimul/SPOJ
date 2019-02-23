#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,sum,r,total,d,remainder,e,f,c,cnt;
    cin>>T;
    while(T--)
    {
        sum=0,remainder=0,total=0,cnt=0;
        cin>>e>>f>>c;
        total = e+f;
        while(1)
        {
            if((remainder/c)==1)
            {
                sum++;
                remainder = remainder%c;
            }
            r = total%c;
            total = total/c;
            d = total;
            sum += d;
            remainder += r;
            if(total==0 && remainder==0)
            {
                break;
            }

        }
      cout<<sum<<endl;
    }
    return 0;
}
