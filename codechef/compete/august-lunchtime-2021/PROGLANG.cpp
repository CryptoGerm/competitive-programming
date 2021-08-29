#include <iostream>
using namespace std;

int main() {
	int t, lang[6];
	cin >> t;
	while (t--) {
	    for (int i=0; i<6; i++) {
	        cin >> lang[i];
	    }
	    if ((lang[0]==lang[2] || lang[0]==lang[3]) && (lang[1]==lang[2] || lang[1]==lang[3])) {
	        cout << 1 << endl;
	    } else if ((lang[0]==lang[4] || lang[0]==lang[5]) && (lang[1]==lang[4] || lang[1]==lang[5])) {
	        cout << 2 << endl;
	    } else {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
