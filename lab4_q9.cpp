#include<iostream>
using namespace std;
int main()
{
	double p,r,t,f;
	cout<<"enter the principal rate"<<endl;
	cin>>p;
	cout<<"enter the interest rate"<<endl;
	cin>>r;
	cout<<endl<<"enter the time "<<endl;
	cin>>t;
	f=p*t*r/100;
	cout<<"the simple interest is "<<f;
	return 0;
}
