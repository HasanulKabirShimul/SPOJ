#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int x,y,i,m,k,ans;
        cin >> x >> y;
        if(x%2==0 && y%2==0 && y<=x && abs(y-x)<=2)
        {

            ans = x+y;
            cout<<ans<<endl;
        }
        else if(x%2==1 && y%2==1 && y<=x && abs(y-x)<=2)
        {
            ans = (x+y)-1;
            cout<<ans<<endl;
        }

        else
            cout<<"No Number\n";

    }
    return 0;
}
