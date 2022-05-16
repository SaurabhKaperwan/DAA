#include<iostream>
using namespace std;

void difference(int arr[],int n,int k)
{
    int c = 0;
    sort(arr, arr+n);  
 
    int l = 0;
    int r = 0;
    while(r < n)
    {
         if(arr[r] - arr[l] == k)
        {
              c++;
              l++;
              r++;
        }
         else if(arr[r] - arr[l] > k)
              l++;
         else 
              r++;
    }  

   cout<<"Output: "<<c<<endl;
}

int main()
{
    int n;
    cout<<"Enter size:";
        cin>>n;
        int arr[n];
        cout<<"Enter elements:"<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cout<<"Enter the key:";
        cin>>k;
        difference(arr,n,k);
    return 0;
}
