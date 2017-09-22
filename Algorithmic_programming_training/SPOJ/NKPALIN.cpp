#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<string.h>
using namespace std;

int main(){
	string s,mxstr
	char* f[1005][1005];
	int i = 0;
	cin >> s;
	int l = s.size();
	for (i = 0; i<l; i++){
		for (int j = i; j<l; j++){
			if (i == j) f[i,j] = s[i];
			else if (s[i] == s[j]) {
				if ((j-i)>1){
					f[i,j] = s[i] + f[i+1,j-1] + s[j];
					if (mxstr.size() < f[i,j].size()) mxstr = f[i,j];
				}
				else {
					f[i,j] = s[i] + s[j];
					if (mxstr.size() < f[i,j].size()) mxstr = f[i,j];
				}
			}
		}
	}
	cout << mxstr;
}