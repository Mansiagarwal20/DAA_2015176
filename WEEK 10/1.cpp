#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int s[n],e[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
        cin>>e[i];
    vector<pair<int,int> >activity;
    for(i=0;i<n;i++)
        activity.push_back(make_pair(e[i],s[i]));
    sort(activity.begin(),activity.end());
    int currentEnd=-1;
    int c=0;
    int sel[n];
    for(i=0;i<n;i++)
    {
        if(currentEnd<=activity[i].second)
        {
            cout<<activity[i].first<<", "<<activity[i].second<<endl;
            sel[c]=i+1;
            c++;
            currentEnd=activity[i].first;
        }
    }
    cout<<"No. of non-conflicting activities: "<<c<<endl;
    cout<<"List of selected activities: ";
    for(i=0;i<c;i++)
        cout<<sel[i]<<", ";
}
