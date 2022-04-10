#include<iostream>
using namespace std;
int findMin(int a[],int start,int end)
{
    int min=start;
    for(int i=start+1;i<end;i++)
    {
        if(a[min]>a[i])
        {
            min=i;
        }
    }
    return min;
}
void swap(int a[],int start,int min)
{
    int temp=a[start];
    a[start]=a[min];
    a[min]=temp; 
}
void selectionSort(int a[],int size)
{
    int start=0,end=size-1,min;
    while(start<end)
    {
        min=findMin(a,start,end);
        if(start != min)
        {
            swap(a,start,min);
        }
        start++;
    }
}
int main()
{
    int a[]={2,5,3,2,1,6,7,4,9};
    selectionSort(a,9);
    for(int i=0;i<9;i++)
        cout<<a[i]<<" ";
}