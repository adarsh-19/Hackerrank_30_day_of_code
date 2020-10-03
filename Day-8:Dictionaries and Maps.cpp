#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pob pop_back
#define ub upper_bound
#define lb lower_bound
#define mp make_pair
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define shr  ll t;cin>>t; while(t--)
#define fi first
#define sc second
#define pll pair<ll,ll>
#define vll vector<ll>
#define vpll vector<pll>
#define v(all) v.begin(),v.end()
#define mod 1000000007
using namespace std;

  int main()
 {
      FAST;
       //shr
        {  
            ll i,n,b,x,y,c;
            string s,s1,s2;
            map<string,ll>m;
            cin>>n;
            f1(i,n)
        {    
            cin>>s>>x;
             m[s]=x;  //place the value in map
            
         }
         while(cin>>s)
         {
             if(m[s]==0)cout<<"Not found\n";
             else cout<<s<<"="<<m[s]<<endl;
         }
        }
       return 0;
  }                     
  
