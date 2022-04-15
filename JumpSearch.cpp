#include<iostream>
#include<cmath>
using namespace std;
int jumpSearch(int a[],int size,int item)
{
	int i=0;
	int j=0;
	int m=pow(2,0);//block size
	while(a[m] <= item && m<=size)
	{
		i=m;//Starting of block
		j++;
		m=pow(2,j);
	}
	for(int x=i;x<m;x++)
	{
		if(a[x]==item)
			return x;
	}
	return -1;
}
int main()
{
	int loc=-1;
	int a[]={1,3,5,6,8};
	loc=jumpSearch(a,5,8);
	if(loc>=0)
		cout<<"Found at:"<<loc+1;
	else
		cout<<"Not found";

}
