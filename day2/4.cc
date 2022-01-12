#include<bits/stdc++.h>
using namespace std;
void natural(int n,int t)
{
    if(n==0)
    return;
     cout<<t<<" ";
    natural(n-1,t+2);
   
}
int main()
{
    int n;
    cin>>n;
    natural(n,1);
}