#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,k=n,j,l=1;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k--;
            cout<<i+1;
            cout<<endl;
        }
        else
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k--;
            cout<<i+1;
            for(j=0;j<l;j++)
            cout<<" ";
            l=l+2;
            cout<<i+1<<endl;
        }
    }
    k=2;
    l=l-4;
    for(i=n-2;i>=0;i--)
    {
        if(i==0)
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k++;
            cout<<i+1;
            cout<<endl;
        }
        else
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k++;
            cout<<i+1;
            for(j=0;j<l;j++)
            cout<<" ";
            l=l-2;
            cout<<i+1<<endl;
        }
    }
}