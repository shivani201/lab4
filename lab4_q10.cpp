#include<iostream>
using namespace std;
int main()
{
	double n,p,r,t,f;
	cout<<" enter the principle rate "<<endl;
	cin>>p;
	cout<<" enter the interest rate "<<endl;
	cin>>r;
	cout<<" enter the time "<<endl;
	cin>>t;
	cout<<" how many times is it compounded "<<endl;
	cin>>n;
	int a=(1+r/n),b=n*t;
	f=p*(a^b);
	cout<<" the simple interest is "<<f;
	return 0;
}
