#include<bits/stdc++.h>
using namespace std;

int find(int v,int parent[])
{
	if(parent[v]==-1)
		return v;
	return find(parent[v],parent);
}

void union(int from,int to,int parent[])
{
	parent[from]=to;
}

bool isCyclic(vector<pair<int,int>> edges,int parent[])
{
	for(auto e: edges)
	{
		int fromVertex=find(e.first,parent);
		int toVertex=find(e.second,parent);

		if(fromVertex==toVertex)
			return true;

		union(fromVertex,toVertex,parent);
	}
}

int main()
{
	int E,V;

	cout<<"Enter no of vertices and edges:";
	cin>>E>>V;

	vector<pair<int,int>> edges;

	int parent[V];

	makeSet(parent,V);
	for(int i=0;i<E;i++)
	{
		int from,to;
		cin>>from>>to;
		edges.push_back({from,to});
	}

	if(isCyclic(edges,parent))
		cout<<"Cycle is present\n";
	else
		cout<<"Cycle is not present\n";

	return 0;
}