#include<iostream>
using namespace std;
int main()
{
     int n,m,i,j,sum,c,key,e;
      //Enter number of elements in the array
      cin>>n;
      int a[n];
      //Enter elements of sorted array
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      //Enter number of elements in the array
      cin>>m;
      int b[m];
      //Enter elements of sorted array
      for(i=0;i<m;i++)
      {
          cin>>b[i];
      }
      for(i=0;i<n;i++)
      {
          for(j=i;j<m;j++)
          {
              if(a[i]==b[j])
                  {
                      cout<<a[i]<<" ";
                      e=1;
                      break;
                  }
          }
      }
      if(e==0)
      cout<<"No Common Element Exists"<<endl;
}


