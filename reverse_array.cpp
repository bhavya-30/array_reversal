#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int temp,i;
    int start=0;
    int end=n-1;
    while(start<end)
    {
      temp= arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;

    }
    cout<<"reverse array is:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[20],n,i;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"array:";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    reverse(arr,n);
    return 0;
}