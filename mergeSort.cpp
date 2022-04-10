#include<iostream>
using namespace std;
int f=0;
int comp=0;
void merge(int a[],int l,int mid,int h)
{
	f++;
	int i=l,j=mid+1,k=0;
	int c[h-l+1];
	int x=0;
	while(i<=mid && j<=h)
	{
		comp++;
		if(a[i]<=a[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=a[j++];
		}
	}
	while(j<=h)
		c[k++]=a[j++];
	while(i<=mid)
		c[k++]=a[i++];
	for(i=l;i<=h;i++)
	{
		a[i]=c[x];
		x++;
	}
}
void mergeSort(int a[],int l,int h)
{
	f++;
	if(l<h)
	{
		int mid=(l+h)/2;
		mergeSort(a,l,mid);
		mergeSort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

int main()
{
	int a[]={2,5,3,2,1,6,7,4};
	mergeSort(a,0,7);
	cout<<"Sorted Array\n";
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nFunction call:"<<f;
	cout<<"\nComparisons:"<<comp;
}
