#include<iostream>
using namespace std;
int main()
{
    int i,j,k,t,n,c,s,key,e;
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
     for(j=1;j<n;j++)
     {
        key=a[j];
        k=j-1;
        while (k >= 0 && a[k] > key)
        {
            a[k+1]=a[k];
            k=k-1;
            c++;
        }
        a[k+1]=key;
        s++;
    }
    for(e=0;e<n;e++)
    {
        cout<<a[e]<<" ";
    }
    cout<<endl<<"Comparisions = "<<c<<endl;
    cout<<"Shifts ="<<s+c<<endl;
    }
}
