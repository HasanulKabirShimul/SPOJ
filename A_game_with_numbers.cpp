#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int i=0,m,k,x,cnt=0,mx;
    int output[100];
    cin>>n;
    if(n<=9)
    {
        cout<<"1\n"<<n<<endl;
    }
    else
    {
        while(n!=0)
        {
            int rem = n%10;
            if(rem==0)
                 mx = 1;
            else
                mx = rem;
            n = n-mx;
            output[i] = mx;
            i++;
            cnt++;

        }
    }
    if(cnt%2==0)
        cout<<"2\n"<<endl;
    else
        cout<<"1\n"<<output[0]<<endl;
    return 0;
}
