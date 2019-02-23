#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    while(cin>>x)
    {
        float sum=0;
        int i,cnt=0;
        if(x==0)
            break;
        for(i=2;;i++)
        {
            sum+= (float)1/i;
            cnt++;
            if(sum>=x)
                break;
        }
        cout<<cnt<<" "<<"card(s)"<<endl;

    }
    return 0;
}
