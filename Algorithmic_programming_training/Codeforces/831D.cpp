// analyzing 831D

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>

using namespace std;

int n,k,i,j;
long long p,a[1010],b[2010];
long long l=0,r=2e9+10,ans=0;

int check(long long lim){
	int now=1;
	for (int i=1;i<=K;i++)
		if (abs(B[i]-A[now])+abs(B[i]-p)<=lim){
			now++; 
			if (now>n) return 1;
		}
	return 0;
}

int main(){
	cin >> n >> k >> p;
	for (i = 0; i<n; i++) cin >> a[i];
	for (i = 0; i<k; i++) cin >> b[i];
	sort(a,a+n);
	sort(b,b+k);
}