/*
  Count Pairs
  Prepbuddy is having three array sequences A, B, C of length N each. Each sequence consist of integers between 1 to N(inclusive). Prepbuddy find a pair(i,j) to be 
  beautiful if it satisfies the condition Ai = BCj. Find how many pairs(i,j) of integers between 1 and N(inclusive) are beautiful ?

  Input format
  The first line of the input contains a single integer N - the length of arrays A, B and C.
  The second line contains N space-separated integers A1, A2.......AN - the elements of the array A.
  The third line contains N space-separated integers B1, B2.....BN - the elements of the array B.
  The fourth line contains N space-separated integers C1, C2.....CN - the elements of the array C.

  Output format
  Print a single integer - the required number of pairs.

  Constraints
  1 ≤ N ≤ 2∗10^5
  1 ≤ Ai,Bi,Ci ≤ N

  Time Limit
  1 second

  Example
  Sample Input
  3
  1 2 2
  3 1 2
  2 3 2

  Sample Output
  4

  Sample Test Case Explanation
  Four pairs satisfy the condition: (1,1), (1,3), (2,2), (3,2).
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  int a[20000], b[20000], c[20000];
  
  for(int i=0; i<n; i++) {
    cin >> a[i];      // input values in array a;
  }
  
  for(int i=0; i<n; i++) {
    cin >> b[i];    // input values in array b;
  }
  
  for(int i=0; i<n; i++) {
    cin >>c[i];     // input values in array c;
  }
  
  int count=0;
  for(int i=0; i<n; i++) {
    
    for(int j=0; j<n; j++) {
      
      if(a[i] == b[c[j]-1])     // calculating beautiful pairs
        count++;
      
    }
    
  }
  cout << count;
  
  return 0;
}
