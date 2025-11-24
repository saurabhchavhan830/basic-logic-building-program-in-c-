#include<iostream>
using namespace std;
int main()
{
	int n;
	int i = 2;
	cout << " Enter a number :";
	cin >> n;
	while (i<= n-1) {
	
		if (n%i==0) {
		
			cout << "non prime";
	     	return 0; // stop program here 
    }
	   

	        i+=1;
}
	cout<<"Prime";
	return 0;		
}
