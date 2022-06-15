#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int n,int m)
{
	if(n==0 || m==0)
		return 0;

	if(s1[n-1]==s2[m-1])
		return 1+LCS(s1,s2,n-1,m-1);

	int left=LCS(s1,s2,n,m-1);
	int right=LCS(s1,s2,n-1,m);

	return max(left,right);
}

int main()
{
	string s1="abcdefghij";
	string s2="cdgi";

	cout<<"LCS is:"<<LCS(s1,s2,s1.length(),s2.length());
}
