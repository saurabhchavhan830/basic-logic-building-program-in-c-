#include<iostream>
using namespace std;
int main()
{
	
	int si, p, r ,t;
	
	cout << "Enter principal ";
	cin>> p;
	
	cout << "Enter rate ";
	cin>> r;
	
	cout<< "Enter time ";
	cin >> t;
	si= (p*r*t)/100;
	cout << "the simple interest " << si << endl;
	
	return 0;
	
}
