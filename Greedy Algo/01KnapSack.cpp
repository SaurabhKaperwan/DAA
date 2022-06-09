#include<bits/stdc++.h>
using namespace std;
int knapSack(int W,int weight[],int profit[],int n)
{
	if(n==0 || W==0)
		return 0;
	if(W<weight[n-1])
		return knapSack(W,weight,profit,n-1);
	int lProfit=profit[n-1]+knapSack(W-weight[n-1],weight,profit,n-1);
	int rProfit=knapSack(W,weight,profit,n-1);

	return max(lProfit,rProfit);
}
int main()
{
	int n;
	cout<<"Enter no of items:";
	cin>>n;
	int profit[n],weight[n],W;
	cout<<"Enter weights:\n";
	for(int i=0;i<n;i++)
	{
		cin>>weight[i];
	}

	cout<<"Enter profit:\n";
	for(int i=0;i<n;i++)
	{
		cin>>profit[i];
	}

	cout<<"Enter Knapsack capacity:";
	cin>>W;

	cout<<"Maximum profit:"<<knapSack(W,weight,profit,n);
}
