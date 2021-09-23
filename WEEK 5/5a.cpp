#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void countSort(char a[], int n)
{
 	int count [26]={0},arr[n];
 	char j;
 	for(int i=0;i<n;i++)
 	{
 		count[a[i]-97]+=1;
	}

		int max = 1;
	for(int i=0;i<26;i++)
	{
		if(max<count[i])
		{
			max=count[i];
			j=i+97;
		}
	}
	if(max==1)
		cout<<"No Duplicates Present"<<endl;
	else
		cout<<j<<"-"<<max<<endl;


}
int main()
{
    int i,j,k,t,n,e;
    //Enter number of arrays
    cin>>t;
    for(i=0;i<t;i++)
    {
     // Enter number of elements in the array
     cin>>n;
     char a[n],b;
     //Enter elements
     for(j=0;j<n;j++)
     {
         cin>>b;
         a[j]=tolower(b);
     }
	countSort(a,n);
	}
}

