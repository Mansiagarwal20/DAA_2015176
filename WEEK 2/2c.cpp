#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
     int t,n,i,j,dif,co,c,key;
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
      co =0;
      for(i=0;i<n;i++)
      {
          for(j=i+i;j<n;j++)
          {
              dif=abs(a[i]-a[j]);
              if(dif==key)
                  {
                      co++;
                  }
          }
      }
      cout<<co<<endl;
  }
}


