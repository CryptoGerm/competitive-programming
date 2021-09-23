#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    if (c>=97 && c<=122) {
        cout << 0;
    } else if (c>=65 && c<=90) {
        cout << 1;
    } else {
        cout << -1;
    }
    
    return 0;
}