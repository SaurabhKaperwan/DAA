#include<iostream>
using namespace std;
int binarySearch(int a[],int l,int h,int item)
{
		int mid=(l+h)/2;
		if(a[mid]==item)
		{
			return mid;
		}
		else if(item>a[mid])
		{
			return binarySearch(a,mid+1,h,item);
		}
		else
		{
			return binarySearch(a,l,mid-1,item);
		}
		return -1;
}
int main()
{
	int loc=-1;
	int a[]={1,3,5,6,8};
	loc=binarySearch(a,0,5,1);
	if(loc>=0)
		cout<<"Found at:"<<loc+1;
	else
		cout<<"Not found";
}