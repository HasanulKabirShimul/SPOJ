#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,i,m,sum=0,product = 1,temp;
        cin >> n;
        int men[n];
        int women[n];
        int max = 0;
        for(i=0; i<n; i++)
        {
            cin>>men[i];

        }
        for(i=0; i<n; i++)
        {
            cin>>women[i];

        }
        for(i=0;i<n; i++)
        {
            for(m=i+1;m<n;m++)
            {
                if(men[i]>men[m])
                {
                    temp = men[i];
                    men[i] = men[m];
                    men[m] = temp;
                }
            }
        }
        temp = 0;
        for(i=0;i<n;i++)
        {
            for(m=i+1;m<n;m++)
            {
                if(women[i]>women[m])
                {
                    temp = women[i];
                    women[i] = women[m];
                    women[m] = temp;
                }
            }
        }

        for(i=0; i<n; i++)
        {
            sum+= men[i]*women[i];
        }
        cout << sum << endl;
    }
    return 0;
}
