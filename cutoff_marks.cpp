#include<iostream>
using namespace std;
int main(){
	int a,b,c,s,max=100;	
	cout<<"Enter the cutoff marks for A grade="<<endl;
	cin>>a;
	cout<<"Enter the cutoff marks for B grade="<<endl;
	cin>>b;
	cout<<"Enter the cutoff marks for C grade="<<endl;
	cin>>c;	
	cout<<"Enter the marks of the student="<<endl;
	cin>>s;
	if(a>max)
	cout<<"Invalid cutoffs"<<endl;
	else if(b>a)
	cout<<"Invalid cutoffs"<<endl;
	else if(c>b)
	cout<<"Invalid cutoffs"<<endl;
	else {
	cout<<"Valid cutoffs"<<endl;
	if((s<=100)&&(s>=a))
	cout<<"A-grade"<<endl;
	if((s<a)&&(s>=b))
	cout<<"B-grade"<<endl;
	if((s<b)&&(s>=c))
	cout<<"C-grade"<<endl;
	if(s<c)
	cout<<"Fail"<<endl;
	}	
	return 0;
}

	
