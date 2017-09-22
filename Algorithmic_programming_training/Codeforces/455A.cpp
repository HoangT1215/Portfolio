#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

int nextInt() {
    int x = 0, p = 1;
    char c;
    do {
        c = getchar();
    } while (c <= 32);
    if (c == '-') {
        p = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * p;
}

const int maxn = 111111;

int main(){
	long long n,mi = 100001,ma = -1;
	long long a[100005],cnt[100005],dp[100005];
	cin >> n;
	for (long long i = 0; i<n; i++){
		cin >> a[i];
		cnt[a[i]]++;
		ma = max(ma, a[i]);
		mi = min(mi, a[i]);
	}
	// answer: sum i*cnt[i]
	dp[0] = 0;
	dp[mi] = mi*cnt[mi];
	for (long long i = mi; i<ma; i++){
		dp[i+1] = max(dp[i],dp[i-1]+(i+1)*cnt[i+1]);
	}
	cout << dp[ma];
}