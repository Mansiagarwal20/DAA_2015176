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
      int f=0,l=0,r=n-1,mid,e=0,temp;
      while(l<=r)
      {
          mid=(l+r)/2;
          if(a[mid]==key)
          {
              if(temp<r)
              {
                for(j=temp+1;j<=r;j++)
                {
                   if(a[j]==key)
                     f++;
                }
              }
              else
              {
                  for(j=temp-1;j>=l;j--)
                {
                   if(a[j]==key)
                     f++;
                }
              }
              e=1;
              break;
          }
          else if(a[mid]>key)
          {
              temp=mid;
              r=mid-1;
          }
         else if(a[mid]<key)
          {
              temp=mid;
              l=mid+1;
          }
      }
      if(e==1)
        cout<<key<<" - "<<f<<endl;
      else if(e==0)
        cout<<"Key not present"<<endl;
  }
}
