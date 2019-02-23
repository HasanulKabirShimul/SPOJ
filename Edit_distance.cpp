#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string a,b;
        int count=0,mini=0,i;
        cin>>a>>b;
        int la = a.length();
        int lb = b.length();
        if(la<lb)   count = lb-la;
        else      count = la- lb;
        if(la>lb)  mini = lb;
        else      mini = la;
        for(i=0;i<mini;i++)
        {
            if(a[i]!=b[i])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
