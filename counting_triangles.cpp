#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cout<<(long long int)((n*n) + (n*(n-1) -(n-1))) <<endl;
    }
    return 0;
}
