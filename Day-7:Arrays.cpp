#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    FAST;
    float k=0,r=0,p=0;
    ll i,n;
    cin >>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a,a+n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }    
        
    

    return 0;
}
