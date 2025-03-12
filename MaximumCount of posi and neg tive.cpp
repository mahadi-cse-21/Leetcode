#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    int pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
    }
    cout<<max(pos,neg);
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(a,n);
    return 0;
}