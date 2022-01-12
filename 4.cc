#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<n-i+1;j++)
        cout<<" ";
        for(j=0;j<i;j++)
        cout<<"* ";
        cout<<endl;
    }
    for(i=0;i<=n;i++)
    cout<<"* ";
    cout<<endl;
    for(i=n;i>0;i--)
    {
        for(j=0;j<n-i+1;j++)
        cout<<" ";
        for(j=0;j<i;j++)
        cout<<"* ";
        cout<<endl;
    }
}