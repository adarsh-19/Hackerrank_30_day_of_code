using namespace std;
#include <iostream>
p.yearPasses()
{
    if(n<=0)
        {
            cout<<"Age is not valid, setting age to 0."<<endl<<"You are young."<<endl<<"You are young."<<endl<<endl;


        }
        else if(n<13)
        {
            cout<<"You are young."<<endl<<"You are a teenager."<<endl<<endl;


        }
        else if(n>=13&&n<18)
        {
            cout<<"You are a teenager."<<endl<<"You are old."<<endl<<endl;


        }
        else if(n>=18)
        {
            cout<<"You are old."<<endl<<"You are old."<<endl<<endl;


        }
    }
}

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
