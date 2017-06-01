#include<iostream>
using namespace std;
int main(){
int n,
float sum=0.0;
int arr[n];
cout<<"Enter the number of numbers"<<endl;
cin>>n;
cout<<"Enter the numbers"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
sum+=arr[i];
}
int x=sum/n;
cout<<"Average="<<x<<endl;
return 0;
}


