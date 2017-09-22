#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

typedef std::pair<int,int> mypair;
bool cmp ( const mypair& l, const mypair& r)
   { return l.first < r.first; }

pair<int,int> pm1[200005],pm2[200005];

int main(){
	long long m,a[200005],b[200005],c[200005];
	cin >> m;
	for (long long i = 0; i < m; i++){
		cin >> a[i];
		pm1[i].first = a[i];
		pm1[i].second = i;	
	}
	for (long long i = 0; i < m; i++){
		cin >> b[i];
		pm2[i].first = b[i];
		pm2[i].second = i;
	}
	sort(pm1,pm1+m,cmp);
	sort(pm2,pm2+m,cmp);
	for (long long i = 0; i < m; i++){
		c[pm2[i].second] = pm1[m-1-i].first;
	}
	for (long long i = 0; i < m; i++){
		cout << c[i] << " ";
	}
}