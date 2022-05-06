#include<iostream>
using namespace std;
int binarySearch(int a[],int l,int h,int item)
{
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(a[mid]==item)
		{
			return mid;
		}
		else if(item>a[mid])
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
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
