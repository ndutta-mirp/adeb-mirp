 #include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter 4 numbers:"<<endl;
	cin>>a>>b>>c>>d;
	if(((a>b)&&(a>c))&&(a>d)){
	cout<<"Largest no.="<<a<<endl;
		if((b>c)&&(b>d))
		cout<<"2nd largest="<<b<<endl;
		else if((c>d)&&(c>b))
		cout<<"2nd largest="<<c<<endl;
		else if((d>b)&&(d>c))
		cout<<"2nd largest="<<d<<endl;
	}
	else if(((b>a)&&(b>c))&&(b>d)){
	cout<<"Largest no.="<<b<<endl;
		if((a>c)&&(a>d))
		cout<<"2nd largest="<<a<<endl;
		else if((c>d)&&(c>a))
		cout<<"2nd largest="<<c<<endl;
		else if((d>a)&&(d>c))
		cout<<"2nd largest="<<d<<endl;
	}
	else if(((c>a)&&(c>b))&&(c>d)){
	cout<<"Largest no.="<<c<<endl;
		if((b>a)&&(b>d))
		cout<<"2nd largest="<<b<<endl;
		else if((a>d)&&(a>b))
		cout<<"2nd largest="<<a<<endl;
		else if((d>b)&&(d>a))
		cout<<"2nd largest="<<d<<endl;
	}
	else{ 
	cout<<"Largest no.="<<d<<endl;
		if((b>c)&&(b>a))
		cout<<"2nd largest="<<b<<endl;
		else if((c>a)&&(c>b))
		cout<<"2nd largest="<<c<<endl;
		else if((a>b)&&(a>c))
		cout<<"2nd largest="<<a<<endl;
	}
	return 0;
}	

	
	
	
