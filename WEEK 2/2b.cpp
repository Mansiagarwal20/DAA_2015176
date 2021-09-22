#include<iostream>
using namespace std;
int main()
{
     int t,n,i,j,sum,k,e,c;
  //Enter number of arrays
  cin>>t;
  for(c=0;c<t;c++)
  {
      //Enter number of elements in the sorted array
      cin>>n;
      int a[n];
      //Enter elements of array
      for(j=1;j<=n;j++)
      {
          cin>>a[j];
      }
      e=0;
      for(i=1;i<=n;i++)
      {
          for(j=i+i;j<=n;j++)
          {
              sum=a[i]+a[j];
              for(k=0;k<n;k++)
              {
                  if(a[k]==sum)
                  {
                      cout<<i<<", "<<j<<", "<<k<<endl;
                      e=1;
                  }
              }
          }
      }
      if(e==0)
        cout<<"No sequence found"<<endl;
  }
}

