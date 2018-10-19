#include<iostream>
using namespace std;
int main()
{
	int a1=0, a2=0, a3=0;
	cout<<"enter the first angle"<<endl;
	cin>>a1;
	cout<<"enter the second angle"<<endl;
	cin>>a2;
	a3=180-(a1+a2);
	cout<<"the third angle is "<<a3<<endl;
	return 0;
}
