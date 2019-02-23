#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416
int main()
{
    float L;
    while(cin>>L)
    {
        if(L==0) break;
        float A = (L*L)/(2*pi);
        printf("%.2f\n",A);
    }
    return 0;
}
