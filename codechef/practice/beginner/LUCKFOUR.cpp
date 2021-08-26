#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;   // Input no. of test cases
	while (t--) {
	    int n;
	    cin >> n;   //Input an integer
	    int count = 0;
	    while (n) {
	        int last_digit = n%10;
	        n /= 10;
	        if (last_digit == 4)
	            count++;  
	    }
	    cout << count << endl;
	}
	return 0;
}
