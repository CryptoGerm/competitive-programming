/*
	Print the following pattern
	Pattern for N = 4
	. . . 1
	. . 2 3
	. 3 4 5
	4 5 6 7
	The dots represent spaces.

	Input Format :
	N (Total no. of rows)

	Output Format :
	Pattern in N lines
	
	Sample Input :
	5
	
	Sample Output :
	. . . . 1
	. . . 2 3
	. . 3 4 5
	. 4 5 6 7
	5 6 7 8 9
	The dots represent spaces.
*/
#include<iostream>
using namespace std;

int main(){
	int n;
    cin >> n;
    
    int i=1;
    while (i<=n) {
        int k=1;
        while (k<=(n-i)) {
            cout << " ";
            k ++;
        }
        
        int j=1, val=i;
        while (j<=i) {
            cout << val;
            val ++;
            j ++;
        }
        cout << endl;
        i ++;
    }
}


