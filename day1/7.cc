#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int k=n;
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<k;
            k--;
        }
        k=n;
        cout<<endl;

    }
    for(;k>=0;k--)
    cout<<k;
    cout<<endl;
    k=n;
     for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<k;
            k--;
        }
        k=n;
        cout<<endl;

    }
}