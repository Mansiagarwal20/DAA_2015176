#include<iostream>
using namespace std;
int main()
{
     int t,n,key,i,j;
  //Enter number of arrays
  cin>>t;
  for(i=0;i<t;i++)
  {
      //Enter number of elements in the sorted array
      cin>>n;
      int a[n];
      //Enter elements of array
      for(j=0;j<n;j++)
      {
          cin>>a[j];
      }
      //Enter element to be searched
      cin>>key;
      int c=0,l=0,r=n-1,mid,e=0;
      while(l<=r)
      {
          mid=l+(r-l)/2;
          if(a[mid]==key)
          {
              c++;
              e=1;
              break;

          }
          else if(a[mid]>key)
          {
              r=mid-1;
              c++;
          }
          else if(a[mid]<key)
          {
              l=mid+1;
              c++;
          }
      }
      if(e==1)
        cout<<"Present "<<c;
      else if(e==0)
        cout<<"Not Present "<<c;
  }
}
