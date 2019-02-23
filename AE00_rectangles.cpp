#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N,n,ans=0,i,count=0;
    cin >> n;

    int width;
    int lenth;
        for(width=1;width<=n;width++)
        {
            for(lenth=width;lenth<=n;lenth++)
            {
                if(lenth*width<=n)
                    ans++;
            }
        }
        cout<<ans<<endl;
    return 0;

}
