
#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    FAST;
    ll t,n;
    

        cin>>n;
        if(n%2!=0)
        {
         cout<<"Weird\n";
        }
        else if(n%2==0&&n>=2&&n<=5)
            {
            cout<<"Not Weird"<<endl;
            }
            else if(n%2==0&&n>=6&&n<=20)
            {
             cout<<"Weird"<<endl;
            }
            else if((n%2==0)&&n>20)
            {
            cout<<"Not Weird"<<endl;
                
            }
    
    return 0;
}
