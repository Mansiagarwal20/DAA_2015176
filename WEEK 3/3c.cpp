#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,t,n,e,f=0;
    //Enter number of arrays
    cin>>t;
    for(i=0;i<t;i++)
    {
        f=0;
     // Enter number of elements in the array
     cin>>n;
     int a[n];
     //Enter elements
     for(j=0;j<n;j++)
     {
         cin>>a[j];
     }
     sort(a,a+n);
     for(j=0;j<n;j++)
     {
         for(k=j+1;k<n;k++)
         {
             if(a[j]==a[k])
             {
                 f=1;
                 break;
             }
         }
         if(f==1)
          break;
     }
     if(f==0)
     {
         cout<<"NO"<<endl;
     }
     else if(f==1)
     {
         cout<<"YES"<<endl;
     }
    }
}

