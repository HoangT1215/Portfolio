#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
int n,m,i,j;
int a[5000];

int cal_xor(int l, int r){
	int k, sum = 0;
	for (k = l; k<r+1; k++){
		sum = sum xor a[k];
	}
	return sum;
}

int main(){
	cin >> n;
	for (i = 1; i<n+1; i++){
		cin >> a[i];
	}
	
}