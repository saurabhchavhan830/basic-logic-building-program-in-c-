#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter first no.: " ;
	cin >> a;
	cout << "Enter second no.: " ;
	cin >> b;
	
	if (a<b)
	cout << "The minimum no. is :" << a << endl;
	else 
	cout << "The minimum no. is :" << b << endl;
	
	return 0;
}
