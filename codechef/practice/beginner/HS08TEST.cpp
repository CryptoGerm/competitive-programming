#include <iostream>
using namespace std;

int main() {
	int x;
	double balance;
	cin >> x >> balance;
	if ( x <= (balance-0.50) && x%5==0 ) {
        balance = balance - x - 0.50;
	}
	cout << balance;
	return 0;
}