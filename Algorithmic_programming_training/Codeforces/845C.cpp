#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

typedef std::pair<long long,long long> mypair;
bool cmp ( const mypair& l, const mypair& r)
   { return l.first < r.first; }

pair<long long,long long> event[400005];


int main(){
	long n,cnt = 0;
	bool yes = true;
	cin >> n;
	for (long i = 0; i<n; i++){
		long long l,r;
		cin >> l >> r;
		event[2*i].first = l;event[2*i].second = 1;
		event[2*i+1].first = r+1;event[2*i+1].second = -1;
	}
	sort(event,event+2*n,cmp);
	// check if viable with 2 TVs
	'''
	for (long i = 0; i<2*n; i++){
		cnt += event[i].second;
		if (cnt > 2){
			yes = false;
			break;
		}
	}
	'''
	// the above code can get bugged at the event where the show ends and another starts
	
	if (yes) cout << "YES";
	else cout << "NO";
}