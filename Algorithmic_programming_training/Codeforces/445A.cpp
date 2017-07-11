#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<algorithm>
#include<list>
#include<vector>
#include<iomanip> // to set precision

using namespace std;
int n,m,i,j;
char a[100][100];
char s[100];


int main(){
	cin >> n >> m;
	for (i = 0; i < n; i++){
		cin >> s;
		for (j = 0; j < m; j++){
			a[i][j] = s[j];
			if (a[i][j] == '.')
			{
				if ((a[i-1][j] == '-') and (a[i][j-1] == '-'))
				{
					a[i][j] = 'B';
				}
				else if ((a[i-1][j] == 'B') or (a[i][j-1] == 'B')){
					a[i][j] = 'W';
				}
				else if ((a[i-1][j] == 'W') or (a[i][j-1] == 'W')){
					a[i][j] = 'B';
				}
				else if (i == 0){
					a[i][j] = 'B';
				}
			}
		}
	}
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++)
		{
			cout << a[i][j];
			if (j == m-1) cout << endl;
		}
	}

}