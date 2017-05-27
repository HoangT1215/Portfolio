#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>

using namespace std;

int count(int k){
	int answer = 0;
	while (k>0){
		k = (int) k/5;
		answer += k;
	}
	return answer;
}

int main () {
	int m, min,c = 0,i = 0;
	int ans[1000000];
	cin >> m;
	for (i = 5; i < 1000000; i++){
			ans[i] = count(i);
		if (ans[i] ==  m){
			if (c == 0){
				min = i;
			}
			c += 1;
		}
	}
	cout << c << endl;	
	for (i = 0; i < c; i++){
		cout << min+i << " ";
	}
}