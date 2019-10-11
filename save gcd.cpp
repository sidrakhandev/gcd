#include<iostream>
using namespace std;
int main()
{
	
int a,b,c;
cout<<"enetr"	;
cin>>a>>b;

	while (b!=0)
	{
		c=b;
		b=a%b;
		
		a=c;
	
	}

	
cout<<a;	
	return 0;
}
