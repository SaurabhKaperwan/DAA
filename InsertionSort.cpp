#include<iostream>
using namespace std;
void insertionSort(int a[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(key<a[j])
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        if(i!=(j+1))
            a[j+1]=key;
    }
}
int main()
{
    int a[]={2,5,3,2,1,6,7,4,9};
    insertionSort(a,9);
    for(int i=0;i<9;i++)
        cout<<a[i]<<endl;
}
