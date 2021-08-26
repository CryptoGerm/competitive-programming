#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;   // Input no. of test cases
	while (t--) {
	    int n;
	    cin >> n;   // Input an integer
	    int first = n, last = n%10;
	    for ( ; first>=10; first/=10) {}    // Finding first digit
	    int sum = first + last;
	    cout << sum << endl;
	}
	return 0;
}
