#include<iostream>
using namespace std;
int main()
{
	int d=0, y=0, w=0;
	cout<<"enter the days"<<endl;
	cin>>d;
	y=d/365;
	d=d-(y*365);
	w=d/7;
	d=d-(w*7);
	cout<<"in year "<<y<<"y"<<endl;
	cout<<"in week "<<w<<"w"<<endl;
	cout<<"in days "<<d<<"d"<<endl;
	return 0;
}
