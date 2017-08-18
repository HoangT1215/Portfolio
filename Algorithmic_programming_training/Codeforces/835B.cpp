#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long k,sum = 0,i = 0, l = 0;
	int digit[100001],cnt = 0;
	std::string n;
	cin >> k;
	cin >> n;
	l = n.size();
	for ( i = 0; i < l; i++){
		sum += (n[i] - '0');
		digit[i] = (n[i] - '0');
	}
	sort(digit,digit+l);
	long long diff = sum - k;
	long j = 0;
	while ((diff < 0) and (j < l)){
		if (digit[cnt] == 9) j++;
		else {
			diff += (9 - digit[j]);
			cnt++;
			j++;
		}
	}
	cout << cnt;
}