#include<bits/stdc++.h>
using namespace std;

int knapSack(int W,int wt[],int val[],int n)
{
	int dp[n+1][W+1];

	for(int j=0;j<=W;j++)
		dp[0][j]=0;

	for(int i=0;i<=n;i++)
		dp[i][0]=0;

	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(wt[i-1]>j)
				dp[i][j]=dp[i-1][j];

			else
			{
				int include=val[i-1]
			}
		}
	}
}

int main()
{
	int n;
	cout<<"Enter no of times:";
	cin>>n;
	int value[n],weight[n],W;
	cout<<"Enter weights:\n";

	for(int i=0;i<n;i++)
		cin>>weight[i];

	cout<<"Enter profits:\n";

	for(int i=0;i<n;i++)
		cin>>value[i];

	cout<<"Enter Knapsack Capacity:";
	cin>>W;

	cout<<"Max. profit earned:"<<knapSack(W,weight,value,n);
}