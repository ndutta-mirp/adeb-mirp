#include<iostream>
using namespace std;
	int main(){
	int a,b,c,x,y;
	cout<<"Enter coefficient of x^2"<<endl;
	cin>>a;
	cout<<"Enter coefficient of x"<<endl;
	cin>>b;
	cout<<"Enter constant"<<endl;
	cin>>c;
	x=(-b+(((b^2)-4*a*c)^(1/2)))/(2*a);
	y=(-b-(((b^2)-4*a*c)^(1/2)))/(2*a);
	cout<<"1st root="<<x<<endl;
	cout<<"2nd root="<<y<<endl;
	return 0;
}



