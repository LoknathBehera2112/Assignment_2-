#include 
<iostream>
using namespace std;


int main() {
	
float cm; 
float m; 
float km;
	
cout<<"\nPlease enter the desired length in cm";


cin>>cm;
	
m=cm/100;
	
km=cm/100000;
	
cout<<"\nThe length you have entered is "<<m<<" in meters";
	
cout<<"\nThe length you have entered is "<<km<<" in kilometers";
	
return 0;
