#include<iostream>
//#include<sorting>
#include<vector>
using namespace std;
int main()
{
  int n=6;
    int arr[6]={5,-4,0,3,26,1};
    for(int i=0;i<6;i++)
    {
      cout<<arr[i]<<" ";
    }
    //bubble sorting
    for(int i=0;i<n-1;i++)//n-1 passes
    {
  // array traverse
for(int j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
// int temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;
swap(arr[j],arr[j+1]);
}
}
   }
    cout<<endl;
    for(int i=0;i<6;i++)
    {
      cout<<arr[i]<<" ";
    }
    }