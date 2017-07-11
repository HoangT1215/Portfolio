#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;

const long long bigcost = 1e10;

long long i,j,m,x,n = 1;
long long l[200000],r[200000],c[200000];

typedef std::pair<int,int> mypair;
bool comparator ( const mypair& l, const mypair& r)
   { return l.first < r.first; }

pair<int,int> dur[200000];

int main(){
	cin >> n >> x;
	for (i = 0; i<n; i++){
		cin >> l[i] >> r[i] >> c[i];
		dur[i].first = r[i]-l[i]+1;
		dur[i].second = i;
	}
	// don't intersect, sum = x and min cost
	sort(dur,dur+n);
	// two pointers
	i = 0;
	j = n-1;
	m = bigcost;
	while (i<=j){
		// check two pointers
		if ((dur[i].first + dur[j].first) < x) i++;
		if ((dur[i].first + dur[j].first) > x) j--;
		if ((dur[i].first + dur[j].first) == x){
			// check intersect
			if ((r[dur[i].second]<l[dur[j].second]) or (r[dur[j].second]<l[dur[i].second])){		
				m = min(m,c[dur[i].second]+c[dur[j].second]);
			}		
		}
		i++;
	}
	if (m == bigcost) cout << -1;
	else cout << m;
}
