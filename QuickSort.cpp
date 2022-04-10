#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int partition(int a[],int l,int h)
{
	int pivot=a[h],i=l-1,j;
	for(int j=l;j<=h-1;j++)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a,i,j);

		}
	}
	i++;
	swap(a,i,h);
	return i;
}
void quickSort(int a[],int l,int h)
{
	int index;
	if(l<h)
	{
		index=partition(a,l,h);
		quickSort(a,l,index-1);
		quickSort(a,index+1,h);
	}
}
int main()
{
	int a[]={5,6,7,2,3,1};
	quickSort(a,0,5);
	for(int i=0;i<=5;i++)
	{
		cout<<" "<<a[i];
	}

}