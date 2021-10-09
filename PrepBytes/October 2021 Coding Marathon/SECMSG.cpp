/*
  Secret Code
  Prepbudy wants to send some secret information to the government as the data is very important he encrypted the message by adding some extra character to it and 
  write it on a magical paper.
  The magical paper has a special behaviour of accepting only upper case alphabets and numbers and it ignores all the lowercase and special characters.
  Prepbudy wants you to design a program that acts as a magical paper such that when the receiver enters the secret message it returns the original message as the output.

  Input format
  The first line contains a single integer T denoting the total number of test cases.
  The first and only line of each test case contains a single string S - the encrypted message Prepbudy wants to send.

  Output format
  For each test case print a single string - the original message.

  Constraints
  1 ≤ T ≤ 10^4
  1 ≤ |S| ≤ 10^2

  |S| is the length of the string.

  Time Limit
  1 second

  Example
  Sample Input
  2
  hshshbFGFDHKJS#%#23$FDD
  GSgs#FS@)bg555FH

  Sample Output
  FGFDHKJS23FDD
  GSFS555FH
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  for(int i=0; i<t; i++) {
    
    char ch[100];
    cin >> ch;
    
    for(int i=0; ch[i]!='\0'; i++) {
      
      if((ch[i]>=48 && ch[i]<=57) || (ch[i]>=65 && ch[i]<=90)) 
        cout << ch[i];

    }
    cout << "\n";
  }
  
  return 0;
}
