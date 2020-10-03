#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    FAST;
    ll t,l,i;
    cin >> t;
    while (t-->0)
    { 
        string str;
        cin>>str;
        l=str.length();
        for(i=0;i<l;i+=2)
        {
            cout<<str[i];
        }
        cout<<" ";
        for(i=1;i<l;i+=2)
        {
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
