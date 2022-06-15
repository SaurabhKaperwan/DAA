#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int n,int m,vector<vector<int>> &dp)
{
	if(n==0 || m==0)
		return 0;
	if(dp[n][m] !=0)
		return dp[n][m];

	if(s1[n-1]==s2[m-1])
		return dp[n][m]=1+LCS(s1,s2,n-1,m-1,dp);

	int left=LCS(s1,s2,n,m-1,dp);
	int right=LCS(s1,s2,n-1,m,dp);
	return dp[n][m]=max(left,right);
}

int main()
{
	string s1="abcdefghij";
	string s2="cdgi";
	int n=s1.length();
	int m=s2.length();
	vector<vector<int>> dp(n+1,vector<int>(m+1,0));
	cout<<"LCS is:"<<LCS(s1,s2,n,m,dp);
}
