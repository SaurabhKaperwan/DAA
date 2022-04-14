#include<iostream>
using namespace std;
void bubbleSort(int a[],int size)
{
	bool swap;
	for(int i=0;i<size;i++)
	{
		swap=false;
		for(int j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap=true;
			}	
		}
		if(swap==false)
			{
				break;
			}
	}
}
int main()
{
	int a[]={1,2,1,54,3,5};
	int size=sizeof(a)/sizeof(a[0]);
	bubbleSort(a,size);
	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}
}