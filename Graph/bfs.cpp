#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void bfs(vector<int> adj[],vector<bool> &visit,int s)
{
	queue<int> q;
	visit[s]=true;
	q.push(s);
	cout<<"BFS Traversal:\n";
	while(!q.empty())
	{
		int temp=q.front();
		cout<<temp<<" ";
		q.pop();
		for(auto it=adj[temp].begin();it != adj[temp].end();it++)
		{
			if(!visit[*it])
			{
				visit[*it]=true;
				q.push(*it);
			}
		}
	}
}
int main()
{
	int n,e;
	cout<<"Enter number of vertex:";
	cin>>n;
	cout<<"Enter number of edges:";
	cin>>e;
	vector<int> adj[n];
	int u,v;
	vector<bool> visit(n,false);
	for(int i=0;i<e;i++)
	{
		cout<<"From:";
		cin>>u;
		cout<<"To:";
		cin>>v;
		addEdge(adj,u,v);
	}
	cout<<"Starting node is 0\n";
	for(int i=0;i<n;i++)//For Dis-connected graph
	{
		if(!visit[i])
		{
			bfs(adj,visit,i);
		}
	}
}
