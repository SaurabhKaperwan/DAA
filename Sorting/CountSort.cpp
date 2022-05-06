#include<iostream>
using namespace std;
int findMax(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
void countSort(int a[],int n)
{
    int max=findMax(a,n);//Range
    int output[n];//Temp Array
    int count[max];//Array to store frequency of element
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)//For finding frequencies of all element
    {
        count[a[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=output[i];
    }
}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={14,12,34,11,18,5};
    int n=sizeof(a)/sizeof(a[0]);
    countSort(a,n);
    printArray(a,n);
}
