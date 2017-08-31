#include <iostream>
using namespace std;

int main() {
 int i; int y; int w; int d; int z;
 cout<<"\nPlease enter the no of days";
 cin>>i;
 y=i/365;
 z=i%365;
 w=z/7;
 d=z%7;
 cout<<"\n"<<i<<" equals to "<<y<<" years "<<w<<" weeks and "<<d<<" days.";
	return 0;
}
