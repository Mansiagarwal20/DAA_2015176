#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,j,med;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int maj=n/2;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
            else
                break;
        }
        if(c>maj)
            {
               cout<<"yes"<<endl;
               break;
            }
    }
    if(c<maj)
        cout<<"no"<<endl;
    if(n%2==0)
    {
        med = (a[n/2]+a[(n+1)/2])/2;
    }
    else
        med = a[n/2];
    cout<<med;
}
