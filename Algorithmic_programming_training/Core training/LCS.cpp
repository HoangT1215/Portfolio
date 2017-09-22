'''
Longest common subsequence length note:
To solve the LCS problem we introduce the set of subproblems: given a prefix of the first word and a prefix of the second word, 
find their LCS. Let the prefix of the first word has length i and the prefix of the second word has length j. 
As we see, the DP state is determined by two integer parameters: i and j. The state domain is therefore (i,j)->L, 
where i is the length of first word prefix, j is the length of second word prefix and L is the length of 
the longest common subsequence of these prefixes. The idea of solution is to take the solution for basic subproblem (0,0) 
and then add letters to the prefixes one-by-one until we reach the final state (n1,n2) which represents the problem for the full words.
'''
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b);
 
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
   if (m == 0 || n == 0)
     return 0;
   if (X[m-1] == Y[n-1])
     return 1 + lcs(X, Y, m-1, n-1);
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
 
/* Utility function to get max of 2 integers */
int max(int a, int b)
{
    return (a > b)? a : b;
}
 
/* Driver program to test above function */
int main()
{
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";
 
  int m = strlen(X);
  int n = strlen(Y);
 
  printf("Length of LCS is %dn", lcs( X, Y, m, n ) );
 
  return 0;
}