// dp training
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
int n,m = 0,i,j,b = 0;
bool boo = false;
int a[100000];
vector<char> s[100000];

int main(){
	cin >> s;
	j = s.length();
	for (i=0;i<j;i++){
		a[i] = s[i] - '0'; // transforming chars to digits
		m += a[i];
	}
	if (m%3 != 0){
		for (i=0;i<j;i++){
			if ((a[i]-m)%3 == 0){
				s.erase(i,1);
				if (j>1){
					b += 1;
					break;
				} else {
					cout << "-1";
					boo = true;
				}
			}
		if (b < 1){
			if (j > 2){
				for (i=0;i<j;i++){
					if ((a[i]+m)%3 == 0){
						s.erase(i,1);
						b += 1;
						if (b == 2){
							break;
						} 
					}
				}
				if (b < 2){
					cout << "-1";
					boo = true;
				}
			} else {
				cout << "-1";
				boo = true;
			}
		}
		}
		
		
		}
	if (boo == false){
		int k = 0;
		while (s.length()>0 and k<s.length()){ // clean up the zeros
				if (s[k] == '0'){
					s.erase(k,1);
				}
				k++;
		cout << s;
		}
	}
}