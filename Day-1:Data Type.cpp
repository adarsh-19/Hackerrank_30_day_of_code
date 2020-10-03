#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
   int t; double k ;
   string str;
   
   cin>>t;
   cin>>k;
   cin.ignore();
   getline(cin,str);
   
   cout<<t+i<<endl<<fixed<<setprecision(1)<<k+d<<endl<<s+str<<endl;

    return 0;
}
