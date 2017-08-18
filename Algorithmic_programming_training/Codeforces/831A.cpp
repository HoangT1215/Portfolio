#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;
int s1 = -1,s2 = -1,s3 = -1,state = 0;
int n,m,i,j;
int status(int t){
	int state;
	if (s1 == -1){
		if (s2 == -1) state = 2;
		else{
			if (s3 == -1) state = 1;
			else {
				if ((i > s2) and (i <= s3)) state = 1;
				else if (i > s3) state = 2;
			}
		} 
	}
	else
	{
		if (s2 == -1){
			if (s3 == -1) state = 0;
			else {
				if (i <= s3) state = 0;
				else state = 2;
			}
		} else {
			if (s3 == -1){
				if (i <= s2) state = 0;
				else state = 1;				
			} else {
				if (i <= s2) state = 0;
				else if ((i > s2) and (i <= s3)) state = 1;
				else if (i > s3) state = 2;
				}		
			}
		}
	return state;
}

int main(){
	int a[110];
	bool unimodal = true;
	cin >> n;
	for (i = 0; i<n;i++){
		cin >> a[i];
		if ((a[i] > a[i-1]) and (s1 == -1)){
			s1 = i-1;
		} 
		else if ((a[i] == a[i-1]) and (s2 == -1)) s2 = i-1;
		else if ((a[i] < a[i-1]) and (s3 == -1)) s3 = i-1;
	}

	for (i = 1; i<n;i++){
		if (((a[i] > a[i-1]) and (status(i) != 0)) or ((a[i] == a[i-1]) and (status(i) != 1)) or ((a[i] < a[i-1]) and (status(i) != 2))) unimodal = false;
	}
	
	if (unimodal == true) cout << "YES";
	else cout << "NO";
}