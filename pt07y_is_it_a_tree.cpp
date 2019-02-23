#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10000];
bool visited[10000];
void initialize(int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        visited[i]=false;
    }
}
void dfs(int s)
{
    visited[s] = true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
            dfs(adj[s][i]);
    }
}
int main()
{
    int N,M,i,x,y,connection=0;
    cin>>N>>M;
    for(i=0;i<M;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialize(N);
    for(i=1;i<=N;i++)
    {
        if(visited[i]==false)
        {
            dfs(i);
            connection++;
        }
    }
    //cout<<connection<<endl;
    if(connection==1 && M==N-1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
/* Comments
  1.If the vertex number and edges number differs 1 and the connected components becomes 1
  then It is a tree
  2.Else
     Not Tree ;
     */
