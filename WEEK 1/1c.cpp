#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
while(t--)
{
   int s;
   cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int low=0,i,m,comp=0,jump=0;
    int step=sqrt(s);
   for(i=0;i<s;i+=step)
    {
        comp++;
        if(a[i]==key)
        {
            m=i;
        }
        else if(a[i]<key){
            low=i;
        }
        else
            {
                break;
            }
         jump++;
    }
    int flag=0;
    for(i=low;i<s;i++)
    {
        if(a[i]==key)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
        cout<<"Present";
    else if(flag==0)
        cout<<"Not Present";
    cout<<" "<<comp<<endl;
}
    return 0;
}
