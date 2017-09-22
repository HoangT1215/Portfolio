#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n,k,m = 0;
	int a[105];
	string s;
	cin >> n >> k;
	cin >> s;
	for (int i = 0; i<30; i++) a[i] = 0;
	for (int i = 0; i<s.size(); i++){
		a[s[i]-'a']++;
		m = max(m,a[s[i]-'a']);
	}
	if (m > k) cout << "NO";
	else cout << "YES";
}