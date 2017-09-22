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
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n,x;
	bool fw = false;
		cin >> n;
	for (long long i = 0; i < n; i++){
		cin >> x;
		if ((x%2)!=0){
			fw = true;
			break;
		}
	}
	if (fw) cout << "First";
	else cout << "Second";
}
