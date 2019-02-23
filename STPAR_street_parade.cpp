#include<bits/stdc++.h>
using namespace std;
int isSmall(int A[],int n)
{
    int temp = A[0];
    for(int i=0; i<n; i++)
    {
        if(temp>A[i])
            temp = A[i];
    }
    int u = temp;
    return temp;
}
int main()
{
    int n;
    stack<int>st;
    while(cin>>n)
    {
    int i,v,x = 0,m=0,z,p,k,check=0,d=0;
    int A[n+5],B[n+5],C[n+5];
        if(n==0)
            break;
    for(i=n-1; i>=0; i--)
    {
        cin>>A[i];
    }
    for(i=n-1; i>=0; i--)
    {
        v = x + isSmall(A,n);
        //cout<<v<<endl;
        if(v!=A[i])
        {
            st.push(A[i]);
            //int e = st.top();
            //int b = min(e,A[i]);
            //B[m] = b;
            //b++;
        }
        else
        {
            int z = st.top();
            //st.pop();
            int a = min(z,A[i]);
//           if(a!=z)
//            st.push(z);
            B[m] = a;
            x++;
            m++;
        }
    }
//    cout<<v<<endl;
//    cout<<endl;
//    cout<<st.size()<<endl;
    k = st.size();
    for(i=k; i>0; i--)
    {
        p = st.top();
        st.pop();
        B[m] = p;
        m++;
    }
    //cout<<"m = "<<m<<endl;
    for(i=m-1;i>=0;i--)
    {
        C[d] = B[i];
        d++;
    }
//    for(i=0;i<d;i++)
//    {
//        cout<<C[i]<<" ";
//    }
    cout<<endl;
    for(i=0;i<d-1; i++)
    {
        if((C[i]-C[i+1])!=1)
        {
            cout<<"no"<<endl;
            check=1;
            break;
        }
    }
    if(check==0)
        cout<<"yes"<<endl;
    }
    return 0;

}
