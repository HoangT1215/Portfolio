// 4.36 TLCT quyen 1
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main(){
	int n,s,i;
	int a[100];
	cin >> n;
	for (i = 1;i<n+1;i++){
		cin >> a[i];
		if (i>1 and i<n){
			s[i-1] = a[i] + a[i-1];
		}
	}
	// greedy algorithm?
	
}