#include<iostream>
using namespace std;
int main()
{
     int t,n,i,j,sum,c,key,e;
  //Enter number of arrays
  cin>>t;
  for(c=0;c<t;c++)
  {
      //Enter number of elements in the array
      cin>>n;
      int a[n];
      //Enter elements of array
      for(j=0;j<n;j++)
      {
          cin>>a[j];
      }
      //Enter key
      cin>>key;
      e=0;
      for(i=0;i<n;i++)
      {
          for(j=i+i;j<n;j++)
          {
              sum=a[i]+a[j];
              if(sum==key)
                  {
                      cout<<a[i]<<" "<<a[j]<<", ";
                      e=1;
                  }
          }
      }
      if(e==0)
      cout<<"No Such pair Exist"<<endl;
  }
}


