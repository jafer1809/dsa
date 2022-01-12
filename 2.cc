#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<n-i;j++)
        cout<<" ";
        for(j=0;j<i;j++)
        cout<<"* ";
        cout<<endl;
    }
}