/*
  Link: https://leetcode.com/problems/add-binary/
*/

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

/*
  For each pair of bits (x,y) and a carry c, we do the following:
  sum = x XOR y XOR c
  carry = (x AND y) OR (x AND c) OR (y AND c)
*/
#define N 32
class Solution {
  private:
    int prependZeros(string *a, string *b) {
      int asize = (*a).size();
      int bsize = (*b).size();
      if (bsize > asize) {
        for (int i=1; i<=bsize-asize; i++) {
          (*a).insert((*a).begin(), '0');
        }
        return bsize;
      } else if (asize > bsize) {
        for (int i=1; i<=asize-bsize; i++) {
          (*b).insert((*b).begin(), '0');
        }
        return asize;
      } else return asize; 
    }
    int getBit (char c) {
      return c - '0';
    }
  public:
    string addBinary(string a, string b) {
      string res = "";
      int n = a.size();
      int m = b.size();
      int k = prependZeros(&a, &b);
      
      cout << "a=" << a << endl;
      cout << "b=" << b << endl;
      
      int sum;
      int carry = 0;
      for (int i = k - 1; k >= 0; k--) {
        int A = getBit(a.at(i));
        int B = getBit(b.at(i));
        sum = A ^ B ^ carry;
        carry = (A & B) | (B & carry) | (A & carry);
        res.insert(res.begin(), (char)(sum + '0'));  
      }
      if (carry) res.insert(res.begin(), '1');
      return res;
    }
};

int main (int argc, char** argv) {
  Solution solution;
  string a(argv[1]);
  string b(argv[2]);
  cout << solution.addBinary(a, b) << endl;
  return 0;
}