#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int k=1;
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<n-i;j++)
        cout<<" ";
        for(j=k;j>0;j--)
        cout<<j;
        cout<<endl;
        k=k+2;

    }
}