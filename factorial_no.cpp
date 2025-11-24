#include<iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;   // long long because factorial grows big

    cout << "Enter a number: ";
    cin >> n;

    // factorial of negative numbers doesn't exist
    if(n < 0){
        cout << "Factorial of negative number doesn't exist.";
        return 0;
    }

    int i = 1;
    while(i <= n){
        fact = fact * i;
        i++;
    }

    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}

