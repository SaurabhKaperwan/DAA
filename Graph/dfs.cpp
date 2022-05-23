#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void dfs(vector<int> adj[],vector <bool> &visit,int s)
{
	stack<int> S;
	visit[s]=true;
	S.push(s);
	cout<<"DFS traversal:\n";
	while(!S.empty())
	{
		int temp=S.top();
		S.pop();
		cout<<temp<<" ";
		for(auto it=adj[temp].begin();it != adj[temp].end();it++)
		{
			if(!visit[*it])
			{
				S.push(*it);
				visit[*it]=true;
			}
		}

	}
}
int main()
{
	int n,e;
	cout<<"Enter number of vertices:";
	cin>>n;
	cout<<"Enter number of edges:";
	cin>>e;
	vector<int> adj[n];
	vector<bool> visit(n,false);
	int u,v;
	for(int i=0;i<e;i++)
	{
		cout<<"From:";
		cin>>u;
		cout<<"To:";
		cin>>v;
		addEdge(adj,u,v);
	}
	cout<<"Source node  0\n";
	for(int i=0;i<n;i++)
	{
		if(!visit[i])
		{
			dfs(adj,visit,i);
		}
	}
}