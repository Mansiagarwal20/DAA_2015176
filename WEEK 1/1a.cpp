#include<iostream>
using namespace std;
int main()
{
  int t,n,key,i,j;
  //Enter number of arrays
  cin>>t;
  for(i=0;i<t;i++)
  {
      //Enter number of elements in the array
      cin>>n;
      int a[n];
      int c=0;
      //Enter elements of array
      for(j=0;j<n;j++)
      {
          cin>>a[j];
      }
      //Enter element to be searched
      cin>>key;
      for(j=0;j<n;j++)
        {
            if(a[j]==key)
            {
                cout<<"Present "<< c+1<<endl;
                 break;
            }
            else
                c++;
        }
  }
}
