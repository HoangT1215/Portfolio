#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int n,i,j,k = 0;
int a[100000],p[100000][1000000];
long long s,t = 0;

long long maxSubArraySum(int w[100000])
{
    int max_so_far = w[0];
   	int curr_max = w[0];
 
    for (int i = 1; i < n; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

int main(){
	cin >> n >> s;
	for (i = 0; i<n; i++){
		cin >> a[i]; // O(nlogn) algorithm
	}
	

}