#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,e,av;
	cout<<"enter marks out of 100 "<<endl;
	cout<<"enter marks of the first subject "<<endl;
	cin>>a;
	cout<<"enter marks of the second subject "<<endl;
	cin>>b;
	cout<<"enter marks of the third subject "<<endl;
	cin>>c;
	cout<<"enter marks of the fourth subject "<<endl;
	cin>>d;
	cout<<"enter marks of the fifth subject "<<endl;
	cin>>e;
	av=(a+b+c+d+e)/5;
	cout<<"your have an average of "<<av<<endl;
	cout<<"which is "<<av<<"%"<<endl;
	return 0;
}
