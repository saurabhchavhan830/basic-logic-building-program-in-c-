#include<iostream>
using namespace std;
int main(){
	int n;
	int sum = 0;
	int count = 1;
	cout << "enter number :";
	cin >> n;
	while (count <=n) {
	
		sum = sum + count;
	    count = count + 1;
}
	cout << " The sum is "	<< sum << endl;
	return 0;
	
}
