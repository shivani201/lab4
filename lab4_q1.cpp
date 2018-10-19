#include<iostream>
using namespace std;
int main()
{
	int v=0, km=0, m=0;
	cout<<"enter the number in centimeter"<<endl;
	cin>>v;
	m=v/100;
	km=v/100000;
	cout<<"in km "<<km<<"km"<<endl;
	cout<<"in m "<<m<<"m"<<endl;
	return 0;
}
