#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    while(1)
    {
        if(n%2==0)
        {
            n = n/2;
        if(n==1)
        {
            cout<<"TAK"<<endl;
            break;
        }
        if(n==3)
            {
                cout<<"NIE"<<endl;
                break;
            }
        }
        else
        {
            n = 3*n +3;
        }
    }
    return 0;
}
