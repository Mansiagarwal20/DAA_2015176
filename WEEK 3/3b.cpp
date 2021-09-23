#include<iostream>
using namespace std;
int main()
{
    int i,j,k,t,n,c,s,temp,e,mini;
    //Enter number of arrays
    cin>>t;
    for(i=0;i<t;i++)
    {
     // Enter number of elements in the array
     cin>>n;
     int a[n];
     //Enter elements
     for(j=0;j<n;j++)
     {
         cin>>a[j];
     }
     c=0,s=0;
     for(j=0;j<n;j++)
     {
         mini = j;
         for(k=j+1;k<n;k++)
         {
             c++;
             if(a[k]<a[mini])
             {
                 mini=k;
             }
         }
         temp =a[j];
         a[j]=a[mini];
         a[mini]=temp;
         s++;
     }
    for(e=0;e<n;e++)
    {
        cout<<a[e]<<" ";
    }
    cout<<endl<<"Comparisions = "<<c<<endl;
    cout<<"Swaps ="<<s-1<<endl;
    }
}
