#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t; // Input no. of test cases
	while (t--) {
	    cin >> n;   // Input an integer
	    int sum = 0;
	    while (n>0) {
	        int temp = n%10;    // Finding last digit of integer
	        sum += temp;
	        n /= 10;    // Remove last digit from integer    
	    }
	    cout << sum << endl;
	}
	return 0;
}
