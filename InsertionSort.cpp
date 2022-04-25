#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	int temp;
	for(int i=1;i<n;i++)
	{
		temp=a[i];
		int j=i-1;
		while(j>=0 && temp<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		if(i != (j+1))
		{
			a[j+1]=temp;
		}
	}
}
int main()
{
    int a[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(a) / sizeof(a[0]);
 
    insertionSort(a, n);
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
 
    return 0;
}
