#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,k=n,j,l=n*2-3;
    k=0;
    for(i=n-1;i>=0;i--)
    {
        if(i==0)
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k++;
            char ch=65+i;
            cout<<ch;
            cout<<endl;
        }
        else
        {
            for(j=0;j<k;j++)
            cout<<" ";
            k++;
             char ch=65+i;
            cout<<ch;
            for(j=0;j<l;j++)
            cout<<" ";
            l=l-2;
            cout<<ch<<endl;;
        }
    }
}