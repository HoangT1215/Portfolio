#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

const long N = 100005;

typedef std::pair<long,long> mypair;
bool cmp ( const mypair& l, const mypair& r)
   { return l.first > r.first; }

pair<long,long> cnt[N];

int main(){
	long n, a, b;
	long c[N], cnt[N];
	cin >> n >> a;
	for (long i = 0; i<n; i++){
		cin >> c[i];
		cnt[c[i]].first++;
		cnt[c[i]].second = c[i];
	}
	sort(cnt,cnt+n,cmp);
	cout << cnt[0].second;
}