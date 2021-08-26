#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
	int t;
	cin >> t;   // Input no. of test cases
	while (t--) {
	    int n;
	    cin >> n;   //Input an integer
	    cpp_int factorial = 1;
	    while (n>1) {
	        factorial *= n;
	        n--;
	    }
	    cout << factorial << endl;
	}
	return 0;
}
