//Worst TC=O(n^2)
//Best TC=O(n)
#include <iostream>
using namespace std;
void bubbleSort(int a[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{    
    int a[] = { 10, 35, 32, 13, 26};     
    int n = sizeof(a)/sizeof(a[0]); 
    bubbleSort(a,n); 
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
