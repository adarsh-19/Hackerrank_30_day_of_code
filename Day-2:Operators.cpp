#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    FAST;
    ll ti,ta,k;
    float mc,ti1,ta1,tc;
       cin>>mc;
       cin>>ti;
        cin>>ta;
        ti1=(mc*ti)/100;
        ta1=(mc*ta)/100;
        tc=ti1+ta1+mc;
        cout<<round(tc)<<endl;
    
    return 0;
}
