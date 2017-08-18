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
	char s1[30],s2[30],s3[1010];
	int m,n,i,j;
	cin >> s1;
	cin >> s2;
	cin >> s3;

	for (i = 0; i<strlen(s3);i++){
		for (j = 0; j<26; j++){
			if (((s3[i] - '0') >= 0) and ((s3[i] - '0') <= 9)) {
				cout << s3[i];
				break;
			}
			if (tolower(s3[i]) == s1[j])
				if (islower(s3[i])) cout << s2[j];
				else cout << (char) toupper(s2[j]);
		}
	}
}